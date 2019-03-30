#include <stdio.h>
double Hermite(double x,int n) {
	if (n == 0) return 1;
	if (n == 1) {
		double zoom = 2 * x; return zoom;
	}
	if (n >= 2) {
		double a, b,k;
		a = Hermite(x, n - 1);
		b = Hermite(x, n - 2);
		k = 2 * x * a - 2 * (n - 1) * b;
		return k;
	}
}

int main() {
	double x,output;
	int n;
	scanf_s("%lf%d", &x,&n);
	output = Hermite(x,n);
	printf("%.2lf", output);
}