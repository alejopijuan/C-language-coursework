#include <stdio.h>
#include <stdlib.h>
/*HW 2.60*/

main()
{
unsigned xv=0, yv, ib;

printf("Enter x (4 bytes value) in hex: 0x");
scanf("%x",&xv);
printf("Number of bits to shift max 32:	  ");
scanf("%d",&ib);

yv=xv<<ib;


printf("\n 0X%.8X >> %d\t=0X%.8X\n\n", xv, ib, yv);

}
