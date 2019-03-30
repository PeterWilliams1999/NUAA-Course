#include <iostream>
int fact(int n) {
	int facto=1;
	for (int i = 1; i <= n; i++)
		facto *= i;
	return facto;
}

int com(int m, int r) {
	int com1, com2, com3,outcome;
	com1 = fact(m);
	com2 = fact(r);
	com3 = fact(m - r);
	outcome = com1 / (com2 * com3);
	return outcome;
}

int main() {
	int a1 = 4, a2 = 2, b1 = 6, b2 = 4, c1 = 8, c2 = 7;
	int out;
	printf("C(%d,%d),C(%d,%d),C(%d,%d)\n", a1, a2, b1, b2, c1, c2);
	out = com(a1, a2);
	printf("%d\t", out);
	out = com(b1, b2);
	printf("%d\t", out);
	out = com(c1, c2);
	printf("%d\n", out);
}