#include <stdio.h>
#include <stdlib.h>
//Alejo Pijuan
/* HW 2.61 check for set bit example */


main()
{
   int xv=0;
   printf("\nChp 2, HW61, Check for set bit in x\n\n");
   
   printf("Enter a 32-bit (int) value in hex: x = 0x");
   scanf("%x", &xv);
   printf("You entered  in hex 0X%08X\n\n", xv);
   if (!!xv)
      printf("Some bits in X are equal to 1\n");
      
   if (~xv)
      printf("Some bits in X are equal to 0\n");
      
  // if ( .... )
  //    printf("Some bits in LS byte of X are equal to 1\n");
   
   if (!! (~xv & (0xff << 24 )))
      printf("Some bits in MS byte of X are equal to 0\n\n");
  
}
