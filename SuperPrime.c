#include <stdio.h>
#define N 5
int isPrime(int n);
int splitNum(int n,int num[N]);
int main(void){
	int i, x, num[N]={0}, sum1, sum2, sum3, a, b=0;
	float average;
	//a为数x的位数，b为超级素数的个数 
	//sum1为各位数字的和，sum2为各位数字的平方和，sum3为超级素数的和 
	for (x=100;x<=10000;x++) {
		sum1=0;
		sum2=0;
		if (isPrime(x)) {
			a=splitNum(x,num);
			for (i=0;i<a;i++) sum1 += num[i];
			if (isPrime(sum1)) {
				for (i=0;i<a;i++) {
					sum2 += num[i]*num[i];
				}
				if (isPrime(sum2)) {
					printf("%d\n",x);
					sum3 += x;
					b++;
				}	
			}
		}	
	} 
	average = (float)sum3 / b;
	printf("%f\n",average);
	return 0;
}
//判断素数 
int isPrime(int n){
	int i;
	for (i=2;i<n;i++) {
		if (n%i == 0) break;
	}
	if (i<n) return 0;
	else return 1;	
}
//把各位数分开，放在数组中 
int splitNum(int n,int num[N]){
	int i;
	for (i=0;n != 0;i++) {
		num[i] = n % 10;
		n /= 10;
	}
	return i;//数n的位数 
}
