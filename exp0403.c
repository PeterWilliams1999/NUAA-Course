//exp0403 Written By Zhuzhenwu 071840214
#include <stdio.h>
int main() {
	double x, y;
	scanf_s("%lf%lf", &x, &y);
	if (x > 0 && y > 0) printf("1");
	if (x < 0 && y>0) printf("2");
	if (x < 0 && y < 0) printf("3");
	if (x > 0 && y < 0) printf("4");
	if (x == 0 || y == 0) printf("5");
}
