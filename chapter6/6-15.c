#include <stdio.h> 

int main()
{
	int N, a;     // 변수 선언
	a = 0;     // 3이 나타나는 횟수 a 초기화
	scanf("%d", &N);
	while (N >= 1) {     // N이 1이상 일때까지 반복
		if (N % 10 == 3)
			a += 1;     // N의 일의 자리가 3이면 a에 1을 더함
		N /= 10;     // N을 10으로 나눔
	}
	printf("%d", a);     // 3이 나타나는 횟수 출력
	return 0;
}
