#include <stdio.h>
int fact(int x) {
	int k=1;
	for (int i = 1; i <= x; i++) {
		k *= i;
	}
	return k;
}

int main() {
	int a,j,m=0;
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		j = fact(i);
		m += j;
	}
	printf("%d\n", m);
}