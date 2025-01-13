#include <stdio.h> 

int main()
{
	int N, a, i;     // 변수 선언
	scanf("%d", &N);
	a = 0;     // 1부터 N까지의 합 a 초기화
	i = 0;     // a에 더할 수 i 초기화
	for (;;) {
		i++;
		a += i;     // i를 a에 더하기
		if (i == N)
			break;     // i가 N이면 반복 종료
	}
	printf("%d", a);     // 1부터 N까지의 합 a 출력
	return 0;
}
