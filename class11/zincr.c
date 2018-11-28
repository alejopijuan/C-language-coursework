#include <stdio.h>
#include <stdlib.h>
/*  C to check assemblycode */

#define ZLEN 5
typedef int zip_dig [ZLEN];


void zincr(zip_dig z)
{
    int i;
    for (i = 0; i < ZLEN; i++)
        z[i]++;
}
