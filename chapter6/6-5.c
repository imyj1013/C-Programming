#include <stdio.h> 

int main()
{
	int N, i, j;     // 변수선언
	scanf("%d", &N);     // N 값을 입력받아 저장
	for (i = 1; i <= N; i++) {     // i가 1부터 N이하인 동안 반복
		for (j = 1; j <= i; j++) {     // j가 1부터 i이하인 동안 반복
			printf("*");     // * 1개를 출력
		}
		printf("\n");     // 줄 바꿈
	}
	return 0;
}
