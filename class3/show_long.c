/* show_bytes C from the power point */

#include <stdio.h>
#include <stdlib.h>

void show_bytes(unsigned char *byte_pointer, int len);
void show_int(int a);
void show_long(long d);
void show_float(float b);
void show_pointer(void *c);

typedef unsigned char *byte_pointer;

int main(void){

    show_long (9000000000);


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
void show_long(long x)
{
    show_bytes ((byte_pointer) &x, sizeof(long));
}


