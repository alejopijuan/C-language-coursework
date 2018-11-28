/* show_bytes C from the power point */

#include <stdio.h>
#include <stdlib.h>

void show_bytes(unsigned char *byte_pointer, int len);
void show_int(int a);
void show_float(float b);
void show_pointer(void *c);

typedef unsigned char *byte_pointer;

int main(void){

    printf("Show byte rep for int 90\n");
    show_int(90);
    printf("show byte rep for int -90\n");
    show_int(-90);
    int *px;
    int value = 9000;
    printf("show bytes representation for pointer 9000\n");
    show_pointer(px);



   return 0;
}


void show_bytes(byte_pointer start, int len)
{
   int i;
   for (i = 0; i < len; i++)
    printf("%p\t0x%.2x\n",start+i, start[i]);
   printf("\n");
}

void show_int(int x)
{
       show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}
void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

