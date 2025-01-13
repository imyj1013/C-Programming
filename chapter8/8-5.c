#include <stdio.h> 

void print_triangle(x)     // 함수 print_triangle
{
	int i, j;     // 변수 선언
	for (i = 1; i <= x; i++) {     // i번째줄을 출력
		for (j = 1; j <= i; j++) {
			printf("*");     // *을 i개 출력
		}
		printf("\n");    // 줄바꿈
	}
}

int main()
{
	int N, i;     // 변수 선언
	scanf("%d", &N);     // 값을 입력받아 저장
	while (N > 0) {
		print_triangle(N);     // print_triangle 호출
		scanf("%d", &N);     // 값을 입력받아 저장
	}
	return 0;
}
