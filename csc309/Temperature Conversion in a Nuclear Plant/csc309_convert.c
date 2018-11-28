// Name: Alejo Pijuan
// Class: CSC309 
// Project: Temperature Conversion

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(int argc, char *argv[])
{

if (argc!=1){
printf("Usage: ./a.out interval min max\n    interval (int): Distance between temperatures (Kelvin) printed\n    min (int):      Minimum temperature (Kelvin)\n    max (int):      Maximum temperature (Kelvin)");

return 1;
}

int interval;
printf("\nHow many degrees in Kelvin should there be between entries: ");
scanf("%d", &interval);


int min;
printf("\nWhat is the minimum degree value in Kelvin: ");
scanf("%d", &min);


int max;
printf("\nWhat is the maximum degree value in Kelvin: ");
scanf("%d", &max);


printf("Conversion table: \nK\t C\t F");

for ( min; min <= max; min+=interval ) {
   double ktoc = min-273;
   double ktof = (min* 9/5) - 459.07;
   printf("\n%04d\t%.0f\t%.2f\n", min, ktoc, ktof);
}


}
