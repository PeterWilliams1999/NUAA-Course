//exp0412 Written By ZhuzhenWu 071840214
#include <stdio.h>
int main() {
	int k = 0;
	for (int i = 10; i <= 599; i++) {

		if (i < 100) {
			int a = i % 10;
			int b = (i - a) / 10%10;
			if (i % 3 == 0 && (a == 5 || b == 5)) {
				k++;
				if (k % 8 != 0) printf("%d ", i);
				else printf("%d\n", i);
			}
		}

		if (i >= 100) {
			int a = i % 10;
			int b = (i - a) / 10 %10;
			int c = (i - a - 10 * b) / 100;
			if (i % 3 == 0 && (a == 5 || b == 5 || c == 5)) {
				k++;
				if (k % 8 != 0) printf("%d ", i);
				else printf("%d\n", i);
			}

		}
	}
	printf("\n总数量为%d", k);
}
