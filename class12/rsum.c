#include <stdio.h>
#include <stdlib.h>

/* 4.1.5  Y86 program sum -  1st part  */
int main()
{
   int av[9]={1,2,3,4,5,6,7,8,9};
   int al = 9;
   int res;

   res = rSum( &av, al);
   printf(" sum = %d\n", res);
}

int rSum(int *Start, int Count){
	if (Count <= 0)
		return 0;
	return *Start + rSum(Start+1, Count-1);
}
