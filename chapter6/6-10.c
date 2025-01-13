#include <stdio.h> 

int main()
{
	int N, i, j;
	scanf("%d", &N);
	for (i = 1; i <= (N+1)/2 ; i++) {
		for (j = 0; j <= (i-1) ; j++) {
			printf("O");
		}
		printf("X");
		for (j = 0; j <= (N - 2 * i); j++) {
			printf("O");
		}
		printf("X");
		for (j = 0; j <= (i - 1); j++) {
			printf("O");
		}
		printf("\n");
	}
	for (i = 1; i <= (N + 1) / 2; i++) {
		for (j = (N-i) ; j >= 1 ; j--) {
			printf("O");
		}
		printf("X");
		for (j = (2*i-N)-2; j >= 1 ; j--) {
			printf("O");
		}
		printf("X");
		for (j = (N-i) ; j >= 1 ; j--) {
			printf("O");
		}
		printf("\n");
	}
	return 0;
}
