#include <iostream>
int gcd(int x, int y) {
	if (x < y) { int temp; temp = x; x = y; y = temp; }
	int c;
	while (x != y )
	{
		c = x - y;
		x = y;
		y = c;
	}
	return y;
}


int main() {
	int m, n,output;
	scanf_s("%d%d", &m, &n);
	output = gcd(m, n);
	printf("%d",output);
}