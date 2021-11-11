#include <stdio.h>
#define N 20
int prime(int n);     //判断素数 
int mi(int n,int m);  //求n的m次方 
int main(void){
	int i, r, sum;
	for (i=1;i<=N;i++) {
		for (r=1;r<=N;r++) {
			sum=mi(i,r) + mi(r,i);
			if (prime(sum)) printf("%d %d\n",i,r);
		}
	}
	return 0;	
}
int prime(int n){
	int i;
	for (i=2;i<n;i++) {
		if (n%i == 0) break;
	}
	if (n <= 1) return 0;
	else if (i<n) return 0;
	else return 1;	
}
int mi(int n,int m){
	int i, sum;
	sum=1;
	for (i=m;i>0;i--) sum = sum * n;
	return sum;
}
