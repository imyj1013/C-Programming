#include <stdio.h> 

int main()
{
	int N;     // 변수 선언
	int i = 1;     // 변수 선언, 초기화
	scanf("%d", &N);     // 값을 입력받아 저장
	while (i <= N) {     // i가 N보다 작거나 같을 때까지 반복
		if (N % i == 0) {     // N을 I로 나눈 나머지가 0이라면
			if (i != N)      // i가 N이 아니라면
				printf("%d ", i);     // N의 배수인 i와 뒤의 공백을 함께 출력
			else
				printf("%d", N);     // N의 배수인 N을 출력
		}
		i++;     // i에 1을 더함
	}
	return 0;
}
