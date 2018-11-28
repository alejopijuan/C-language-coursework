#include <stdio.h>

main(){

int x = 0x99;
int y = 0xc6;

printf("\n\t\t0X%X&0X%X=0X%X", x, y,x&y);
printf("\n\n");
printf("\n\t\t0X%X|0X%X=0X%X", x, y,x|y);
printf("\n\n");
printf("\n\t\t0X~%X|0X~%X=0X%X", x, y,~x|~y);
printf("\n\n");
printf("\n\t\t0X%X&!0X%X=0X%X", x, y,x&!y);
printf("\n\n");
printf("\n\t\t0X%X&&0X%X=0X%X", x, y,x&&y);
printf("\n\n");
printf("\n\t\t0X%X||0X%X=0X%X", x, y,x||y);
printf("\n\n");
printf("\n\t\t!0X%X||!0X%X=0X%X", x, y,!x||!y);
printf("\n\n");
printf("\n\t\t0X%X&&~0X%X=0X%X", x, y,x&&~y);
printf("\n\n");
}
