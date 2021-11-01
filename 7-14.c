#include <stdio.h>
#include <math.h>
int main(vpid)
{
	double x, y=1.0;
	printf("enter a positive number:");
	scanf("%lf",&x);
	while (fabs(y-x/y) >= (0.00001*y)) {
		y=(y+x/y)/2;
		
		
	}	
	
	printf("square root:%lf",y);
	
	
	
	
	
	
}
