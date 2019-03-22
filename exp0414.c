//exp0414 Written By Zhuzhenwu 071840214
#include <stdio.h>
int main() {
	for (int i = 100, m, n, k; i < 1000; i++) {
		k = i % 10;
		n = (i - k) / 10 % 10;
		m = (i - 10 * n - k) / 100;
		if (m * m * m + n * n * n + k * k * k == i) {
			printf("%d ", i);
		}
	}
}
