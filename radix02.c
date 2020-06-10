#include<stdio.h>

long dec_to_bin(long n) {
	long bin, sum=0, i=1;
	while(n>0) {
		bin=n%2;
		sum+=bin*i;	// sum = sum + bin * i;
		n/=2; // n = n / 2;
		printf("bin = %ld, sum = %ld, n = %ld, i = %ld\n", bin, sum, n, i);
		i*=10; // i = i * 10;
	}
	
	return sum;
}

int main() {
	int a;
	printf("정수 입력 : ");
	scanf("%d", &a);
	
	printf("%d의 2진수는 %ld 입니다.", a, dec_to_bin(a));
	
	return 0;
}
