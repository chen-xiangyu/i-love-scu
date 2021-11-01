#include <stdio.h>
int main(vord)
{
	int amout;
	printf("Enter a doller amout:");
	scanf("%d\n",&amout);
	x=amout / 20;
	shengxia=amout - x * 20;
	y=shengxia/10;
	shengde=shengxia - y * 10;
	z=shengde/5;
	sheng=shengde - z * 5;
	w=sheng;
	
	printf("$20 bills:%d\n",x);
	printf("$10 bills:%d\n",y);
	printf("$5 bills:%d\n",z);
	printf("$1 bills:%d\n",w);
	
	return 0;
	
	
}
