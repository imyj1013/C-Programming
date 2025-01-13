#include <stdio.h> 

int main()
{
	char x[10], y[10];     // 변수 선언
	int i;     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%c", &x[i]);     // 10개의 문자를 입력받아 배열에 저장
	}
	getchar();     // 엔터키 버림
	for (i = 0; i < 10; i++) {
		scanf("%c", &y[i]);     // 10개의 문자를 입력받아 배열에 저장
	}
	getchar();     // 엔터키 버림
	for (i = 0; i < 10; i++) {
		printf(" %c", x[i]);     // 배열 x의 x[i]를 출력
		printf(" %c", y[i]);     // 배열 y의 y[i]를 출력
	}
	return 0;
}
