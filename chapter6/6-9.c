#include <stdio.h> 

int main()
{
	int N, i, j;     // 변수선언
	scanf("%d", &N);     // N 값을 입력받아 저장
	for (i = 1; i <= N; i++) {     // i가 1부터 N인 동안 반복
		for (j = 0 ; j <= N - i ; j++) {     // j가 1부터 N-i인 동안 반복
			printf(" ");     // 한칸의 공백 출력
		}
		for (j = 1; j <= (2*i - 1) ; j++) {     // j가 1부터 (2i-1)인 동안 반복
			printf("*");     // * 1개 출력
		}
		for (j = 0; j <= N - i; j++) {     // j가 1부터 N-i인 동안 반복
			printf(" ");     // 한칸의 공백 출력
		}
		printf("\n");     // 줄바꿈
	}
	return 0;
}
