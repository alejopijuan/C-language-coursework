#include <stdio.h>
#include <stdlib.h>


long switcheg(long x, long y, long z)
{
	long w =1;
	switch(x){
	case 1:
		w=y*z;
		break;

	case 2:
		w = y/z;

	case 3:
		w += z;

	case 5:
	case 6:
		w -= z;
		break;
	
	default:
		w = 2;
	}
	return w;
}


int main()
{
	int res, xv;
	long yv = 9, zv = 5;
	printf("\nChp 3 - switch statement\n\n");
	do{
		printf("Enter case number 1 to 6 (0 to quit): ");
		scanf("%d", &xv);

		res = switcheg(xv,yv,zv);

		printf("\n\tcase number: %d\t case result: %d\n\n", xv, res);
	}	
	while (xv);

	return 0;
}
