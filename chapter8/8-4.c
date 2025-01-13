#include <stdio.h> 

void print_row1(x)     // 함수 print_row1
{
	int i;     // 변수 선언
	for (i = 1; i <= x; i++) {
		printf("%d", x);     // x를 x번 출력
	}
}

void print_row2(x)     // 함수 print_row2
{
	int i;     // 변수 선언
	printf("%d", x);     // x 출력
	for (i = 1; i <= x-2; i++) {
		printf(" ");     // 공백을 x-2번 출력
	}
	printf("%d", x);     // x 출력
}

int main()
{
	int N, i;    // 변수 선언
	scanf("%d", &N);     // 값을 입력받아 저장
	for (i = 1; i <= N; i++) {
		if (i == 1 || i == N) {     // 맨 윗줄과 맨 아랫줄을 출력할 때
			print_row1(N);      // print_row1 호출
		}
		else {      // 맨 윗줄과 맨 아랫줄이 아닌 줄을 출력할 때
			print_row2(N);     // print_row2 호출
		}
		if (i != N) {
			printf("\n");     // 줄바꿈
		}
	}
	return 0;
}
