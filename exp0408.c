//exp0408 Written By Zhuzhenwu 071840214
#include<stdio.h>
int main() {
	double sum = 1, i,n;
	scanf_s("%lf", &n);
	for (i = 1; i <= n; i++)
		sum = sum* ((2 * i) * (2 * i)) / ((2 * i - 1) * (2*i  +1));
	double outputsum = 2.0 * sum;
	printf("%lf", outputsum);
}
