#include <stdio.h> 

int main()
{
	int N, a;     // 변수 선언
	scanf("%d", &N);
	while (1) {
		a = 0;     // N의 각 자리의 합 a를 초기화
		while (N >= 1) {     // N이 1이상 일때까지 반복
			a += (N % 10);     // N의 일의 자리를 a에 더함
			N /= 10;     // N을 10으로 나눔
		}
		if (a >= 1 && a <= 9)
			break;     // 각 자리의 합이 한자리수가 나오면 반복을 끝냄
		else
			N = a;     // 각 자리의 합이 한자리수가 아니면 a를 N에 저장
	}
	printf("%d", a);     // 한자리인 각 자리의 합 출력
	return 0;
}
