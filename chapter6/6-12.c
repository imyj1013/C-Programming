#include <stdio.h> 

int main()
{
	int N, i, j, a;     // 변수 선언
	i = 1;
	a = 0;     // 출력할 숫자 a 초기화
	scanf("%d", &N);
	while (i <= N) {     // N개의 행
		a = i % 10;     // 각 행의 1열에는 i를 10으로 나눈 나머지 출력
		for (j = 1; j <= N; j++) {     // N개의 열
			printf(" %d", a);     // 공백과 a를 출력
			if (a == 9)
				a = 0;     // a가 9라면 다음에 출력할 수는 0
			else
				a += 1;     // a가 9가 아니라면 다음에 출력할 수는 a에 1을 더한 수
		}
		i += 1;
		printf("\n");     // 줄바꿈
	}
	return 0;
}
