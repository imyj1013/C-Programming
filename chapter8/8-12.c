#include <stdio.h> 

void print_line(int x, int y, int z);     // 함수선언

int main()
{
	int N, i;
	scanf("%d", &N);     // 몇번째줄까지 출력할 것인지 입력받음
	for (i = 1; i <= N; i++) {     // N번 반복
		print_line(N - i, 2 * i - 1, N - i);     // 함수호출
		printf("\n");     // 줄바꿈
	}
	return 0;
}

void print_line(int x, int y, int z)
{
	int i;
	for (i = 1; i <= x; i++) {
		printf(" ");     // x개의 공백 출력
	}
	for (i = 1; i <= y; i++) {
		printf("*");     // y개의 * 출력
	}
	for (i = 1; i <= z; i++) {
		printf(" ");     // z개의 공백 출력
	}
}
