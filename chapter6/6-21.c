#include <stdio.h> 

int main()
{
	int N, a;     // 변수 선언
	double average, b;
	a = 0;     // 입력받은 N 값들의 합 a 초기화
	b = 0;     // 입력 횟수 b 초기화
	while (1) {
		scanf("%d", &N);
		if (N > 100)
			continue;     // N이 100보다 크면 반복문 처음으로 돌아감
		if (N <= 0)
			break;     // N이 음수이면 반복 종료
		a += N;     // a에 N을 더함
		b += 1;     // 입력 횟수 b에 1을 더함
	}
	average = a / b;     // 평균 계산
	printf("%d %.2f %d", a, average, (int)b);     // 입력받은 N 값들의 합, 평균, 입력 횟수 출력
	return 0;
}
