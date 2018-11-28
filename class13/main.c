#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 19, rv;

   rv = _pushtest(x);

   printf("\n\tx = %d\t return value = %d\n\n", x, rv); 
}
