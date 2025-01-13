#include <stdio.h> 

int main()
{
	int N, X[11], a, i;     // 변수 선언
	a = 0;
	scanf("%d", &N);     // 역순으로 저장할 정수 N 입력받음
	for (i = 0; N >= 1; i++) {
		X[i] = N % 10;     // 배열에 N의 일의자리를 저장
		a += 1;     // 자릿수 계산
		N /= 10;     // N을 10으로 나눔
	}
	for (i = 0; i < a; i++) {
		printf(" %d", X[i]);     // 배열에 저장된 N의 각자리를 역순으로 출력
	}
	return 0;
}
