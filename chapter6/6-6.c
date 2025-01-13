#include <stdio.h> 

int main()
{
	int N, i, j;     // 변수 선언
	scanf("%d", &N);     // 값을 입력받아 저장
	for (i = N ; i >= 1 ; i--) {     // i는 N부터 1 이상인 동안 반복
		for (j = i; j >= 1; j--) {     // j는 i부터 1 이상인 동안 반복
			printf("*");     // * 1개를 출력
		}
		printf("\n");     // 줄 바꿈
	}
	return 0;
}
