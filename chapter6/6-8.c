#include <stdio.h> 

int main()
{
	int N, i, j;     // 변수 선언
	scanf("%d", &N);     // 값을 입력받아 저장
	for (i = N; i >= 1; i--) {     // i가 N부터 1이상인 동안 반복
		printf("*");     // 맨 왼쪽 * 1개 출력
		for (j = i-1 ; j >= 1; j--) {     // j가 i-1부터 1이상인 동안 반복
			printf("**");     // *을 2개씩 출력
		}
		printf("\n");     // 줄바꿈
	}
	return 0;
}
