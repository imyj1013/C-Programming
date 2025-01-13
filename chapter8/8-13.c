#include <stdio.h> 

int count_3(int x);     // 함수 선언

int main()
{
	int a, N, i;
	scanf("%d", &N);     // 값을 입력받아 저장
	a = 0;     // 3의 갯수의 변수 초기화
	for (i = 1; i <= N; i++) {
		a += count_3(i);     // 3의 갯수를 더함
	}
	printf("%d", a);     // 3의 갯수 출력
	return 0;
}

int count_3(int x)
{
	int result = 0;
	while (x >= 10) {     // x가 10 이상일때까지 반복
		if (x % 10 == 3) {
			result += 1;     // x의 일의자리가 3이면 result에 1을 더함
		}
		x /= 10;     // x를 10으로 나눔
	}
	if (x == 3) {
		result += 1;     // x가 3이면 result에 1을 더함
	}
	return result;     // 3의 갯수 반환
}
