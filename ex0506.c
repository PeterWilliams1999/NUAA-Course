#include <stdio.h>
void printTriangle(int n) {
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k < i; k++)
			printf(" ");
		for (int k = 1; k <= (n - i + 1); k++)
			printf("*");
		printf("\n");
	}
}

	int main() {
		int n;
		scanf_s("%d", &n);
		printTriangle(n);
	}