//exp0411 Written By Zhuzhenwu 071840214
#include <stdio.h>
int main() {
	int output = 0;
		for (int i = 1000; i < 10000; i++) {
			int a, b, c, d;
			d = i % 10;
			c = ((i - d) / 10) % 10;
			b = (i - d - 10 * c) / 100 % 10;
			a = (i - 100 * b - 10 * c - d) / 1000;
			if (a == d && b == c) {
				output++;
				if (output % 6 != 0)
					printf("%d ", i);
				else printf("%d\n", i);
			}
		}
	printf("\n逆序数为%d个", output);
}
