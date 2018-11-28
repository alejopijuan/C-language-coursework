#include <stdio.h>
#include <stdlib.h>

void swap(long *xp, long *yp){
	long xb = *xp;
	long yb = *yp;
	*xp = xb;
	*yp = yb;
	}

int main()
{
	long xa= 12345, ya=6789;
	long *xb,*yb;
	long xc, yc;

	printf("x=%ld and y=%ld", xa,ya);

	xb = &xa;
	yb = &ya;
	
	swap(xb,yb);
	xc = *xb;
	yc = *yb;
	
	printf("After Swap: \n\t x = %ld and y = %ld", xc, yc);


	return 0;
}
