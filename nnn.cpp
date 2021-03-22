#include <stdio.h>

int fact(int n) {
	if(n<=1)
	return 1;
	return n*fact(n-1);     //因n!=n*(n-1)!
}

int sum(int r) {
	int i; // 紀錄目前要處理的數字
	int sum = 0; // 紀錄到目前為止的總和
	for (i = 1; i <= r; i++) {
	sum = sum + i;
	}
	return sum;
}

int main(void) {
	int n,r;
	printf("請輸入階乘的數(n): ");
	scanf("%d",&n);
	printf("請輸入連加的數(r): ");
	scanf("%d",&r);
	printf("%d!= %d\n",n,fact(n));
	printf("sum= %d\n",sum(r));
	return 0;
}
