#include <stdio.h>
#define N 5
int isPrime(int n);
int splitNum(int n,int num[N]);
int main(void){
	int i, x, num[N]={0}, sum1, sum2, sum3, a, b=0;
	float average;
	//aΪ��x��λ����bΪ���������ĸ��� 
	//sum1Ϊ��λ���ֵĺͣ�sum2Ϊ��λ���ֵ�ƽ���ͣ�sum3Ϊ���������ĺ� 
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
//�ж����� 
int isPrime(int n){
	int i;
	for (i=2;i<n;i++) {
		if (n%i == 0) break;
	}
	if (i<n) return 0;
	else return 1;	
}
//�Ѹ�λ���ֿ������������� 
int splitNum(int n,int num[N]){
	int i;
	for (i=0;n != 0;i++) {
		num[i] = n % 10;
		n /= 10;
	}
	return i;//��n��λ�� 
}
