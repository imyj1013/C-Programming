#include <stdio.h> 

int main()
{
	int N, i, j;     // 변수 선언
	scanf("%d", &N);     // N 값을 입력받아 저장
	for (i = 1; i <= N; i++) {     // i는 1부터 N까지인 동안 반복
		printf("*");     // 맨 왼쪽에 위치하는 * 1개 출력
		for (j = 1; j <= i - 1; j++) {     // j가 1부터 i-1인 동안 반복
			printf("**");     // * 2개를 출력
		}
		printf("\n");     // 줄 바꿈
	}
	return 0;
}
