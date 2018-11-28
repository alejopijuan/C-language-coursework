#include <stdio.h>
#include <stdlib.h>
/* p2.4 */

main()
{
	int v1, v2;
	printf("Enter 2 values in hex to add and substract.\nEnter 1st value:\n");
	scanf("%X",&v1);
printf("Enter 2st value:\n");
	scanf("%x",&v2);
	
printf("\n\t\t0X%X+0X%X=0X%X", v1, v2,v1+v2);
printf("\n\n");
printf("\n\t\t0X%X+0X%X=0X%X", v1, v2,v1&v2);
printf("\n\n");
printf("\n\t\t0X%X+0X%X=0X%X", v1, v2,v1|v2);
printf("\n\n");
printf("\n\t\t0X%X+0X%X=0X%X", v1, v2,v1^v2);
printf("\n\n");
printf("\n\t\t0X%X+0X%X=0X%X", v1, v2,~v1+~v2);
printf("\n\n");
}
