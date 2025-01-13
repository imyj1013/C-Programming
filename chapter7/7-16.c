#include <stdio.h> 

int main()
{
	char x[10];     // 변수 선언
	int y[10], i, j, a, N;     // 변수 선언
	scanf("%d", &N);     // 몇개의 정수를 입력받을지 입력받음
	getchar();     // 엔터키 버림
	for (i = 0; i < N; i++) {
		scanf("%c", &x[i]);     // 문자 N개를 입력받음
	}
	getchar();     // 엔터키 버림
	for (i = 0; i < N; i++) {
		scanf("%d", &y[i]);     // 정수 N개를 입력받음
	}
	getchar();     // 엔터키 버림
	for (i = 0; i < N; i++) {
		a = y[i] % N;     // 정수를 N으로 나눈 나머지를 a에 저장
		printf("x[%d%%%d]=x[%d]=%c\n", y[i], N, a, x[a]);   // 인덱스 a가 가리키는 원소를 출력
	}
	return 0;
}
