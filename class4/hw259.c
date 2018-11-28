#include <stdio.h>
	
	int consist_number(int x, int y)
	{
	    return (x & 0xFF) | (y & ~0xFF);
	}
	
	int main ()
	{
	    int x, y;
	    x = 0x89ABCDEF;
	    y = 0x76543210;
	    printf("%X\n",consist_number(x, y));
	    return 0;
	}
