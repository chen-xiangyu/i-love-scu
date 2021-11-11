#include <stdio.h>
#define N 100000
int f(int n);
int main(void){
	int i;
	for (i=0;i<=N;i++) {
		if (f(i) == i) printf("%d\n",i);
	}
	return 0;
}
int f(int n){
	int i,sum,j;
	sum=0;
	for (i=0;i<=n;i++) {
		j=i;
		while (j != 0) {
			if (j%10 == 1) sum++;
			j /=10;
		}
	}
	return sum;	
}
