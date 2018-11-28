#include <stdio.h>
#include <stdlib.h>
/*  C to check assemblycode */

#define ZLEN 5
typedef int zip_dig [ZLEN];


int get_digit(zip_dig z, int dig)
{
   return z[dig];
}
