#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "csc309_program4_utilities.h"

listPtr listInsert(listPtr *head, const int key) {
  listPtr newNode = (struct lnode *)malloc(sizeof(struct lnode));
  if (*head != NULL) {
    newNode->next = (*head)->next;
    newNode->prev = *head;
    (*head)->next->prev = newNode;
    (*head)->next = newNode;
  } else {

    newNode->next = newNode;
    newNode->prev = newNode;
    *head = newNode;
  }
    char name;
    char lastname;
    char userid;
    char idNum;
  newNode->payload = key;
  return newNode;
}

unsigned int listRemove(listPtr *head, const int key) {
  listPtr foundNode = listFind(*head, key);
  if (foundNode == NULL) {
    return 0;
  } else {
    if (foundNode == *head && (*head)->next == *head) { // List is now empty
      *head = NULL;
    } else if (foundNode == *head) {
      (*head)->prev->next = (*head)->next;
      (*head)->next->prev = (*head)->prev;
      *head = (*head)->next;
    } else {
      foundNode->next->prev = foundNode->prev;
      foundNode->prev->next = foundNode->next;
    }
    free(foundNode);
    return 1;
  }
}

listPtr listFind(const listPtr head, const int key) {
  if (head == NULL) {
    return NULL;
  } else {
    listPtr node = head;
    unsigned char found = 0;
    do {
      if (node->payload == key) {
	found = 1;
      } else {
	node = node->next;
      }
    } while(node != head && !found);
    if (found) {
      return node;
    } else {
      return NULL;
    }
  }
}
