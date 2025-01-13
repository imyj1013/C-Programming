#include <stdio.h> 

int main()
{
	int N, i, j;     // 변수선언
	scanf("%d", &N);     // 값을 입력받아 N에 저장
	for (i = 1; i <= N; i++) {     // i가 1부터 N인 동안 반복
		for (j = 1; j <= N; j++) {      // j가 1부터 N인 동안 반복
			if (i == j || i == N+1-j)     // i가 j와 같거나 (N+1-j)와 같을 때
				printf("X");     // X를 출력
			else
				printf("O");     // O를 출력
		}
		printf("\n");     // 줄바꿈
	}
	return 0;
}
