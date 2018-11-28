#Alejo Pijuan

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "csc309_program4_utilities.h"
#define MAX_CHAR 80

int main(int argc, char *argv[]){
	char line;
	FILE *file1 = fopen(argv[1], 'r');
  	listPtr head = NULL;
	
	while(fgets(line, sizeof(line),file1)!=NULL){
        fscanf(file1,"%d", c)
        fscanf(file1, "%s %s",fname, lname);

	listInsert(&head, file1[0]);
	

        printf("%c",tolower(fname[0]));
          for (int i = 0; i<c; ++i){

            printf("%c", tolower(lname[i]));
      }
      printf("000");
      putchar('\n');
      }


}
