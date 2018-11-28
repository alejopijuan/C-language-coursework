typedef struct lnode *listPtr;
typedef struct lnode {
  listPtr next;
  listPtr prev;
  int payload;
} listRec;

extern listPtr listInsert(listPtr *head, const int key);
extern unsigned int listRemove(listPtr *head, const int key);
extern listPtr listFind(const listPtr head, const int key);
