//exp0410 Written By Zhuzhenwu 071840214
#include <stdio.h>

double Fib1(double var) {
	if (var == 0) return 1.0;
	if (var == 1) return 1.0;
	if (var >= 2) {
		double s1 = Fib1(var - 2);
		double s2 = Fib1(var - 1);
		double output = s1 + s2;
		return output;
	}
}

double Fib2(double var) {
	if (var == 1) return 1.0;
	if (var == 2) return 1.0;
	if (var >= 3) {
		double s1 = Fib2(var - 2);
		double s2 = Fib2(var - 1);
		double output = s1 + s2;
		return output;
	}
}

int main() {
	double i, k, sum = 0;
	for (double num = 1; num <= 20; num++) {
		i = Fib1(num);
		k = Fib2(num);
		sum += (i / k);
	}
	printf("%lf", sum);
}
