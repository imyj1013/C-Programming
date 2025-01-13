#include <stdio.h> 

int main()
{
	int N, a;     // 변수 선언
	a = 0;     // 각 자리수의 합 a 초기화
	scanf("%d", &N);
	while (N >= 1) {     // N이 1이상 일때까지 반복
		a += (N % 10);     // N의 일의 자리를 a에 더함
		N /= 10;     // N을 10으로 나눔
	}
	printf("%d", a);     // 각 자리수의 합 a 출력
	return 0;
}
