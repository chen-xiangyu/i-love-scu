#include <stdio.h>
int main(void)
{
	int x;
	float y;
	
	x=40;
	y=882.21;
	
	printf("!%d!%5d!%-5d!%5.4d!\n", x, x, x, x);
	printf("!%f!%8f!%8.6e!%-8.6e!\n", y, y, y, y);
	return 0;
	
}
