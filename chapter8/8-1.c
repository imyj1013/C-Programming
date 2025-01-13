#include <stdio.h> 

#include <stdio.h>

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int main()
{
	int N, i, sum;
	scanf("%d", &N);
	sum = 0;
	for (i = 0; i <= N; i++) {
		sum = add(0, sum);
	}
	printf("%d", sum);
	return 0;
}
