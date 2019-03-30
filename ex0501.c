#include <stdio.h>
int isprime(int x) {
	int i;
	for (i = 2; i <= x; i++)
	{
		if (x % i == 0) break;
	}
	if (x == i)
		return 1;
	else return 0;
}

int main() {
	int z = 1;
	for (int i = 100, c; i <= 200; i++)
	{c = isprime(i);
	if (c == 0) continue;
	else if (z % 8 != 0) printf("%d\t", i);
	else  printf("%d\n", i); 
	z++;
}
	printf("\n%d", z-1);
}