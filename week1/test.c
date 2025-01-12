#pragma warning(disable: 4996)

#include <stdio.h>

int main()
{
	int N, a, b;;
	scanf("%d", &N);
	a = N;
	b = 0;
	while (a >= 10) {
		b *= 10;
		b += a % 10;
		a /= 10;
	}
	b *= 10;
	b += a;
	printf("%d %d", N, b);
	return 0;
}