#include <stdio.h> 

int main()
{
	int N, i, j, k;     // 변수 선언
	scanf("%d", &N);
	for (i = 1; i <= 6; i++) {     // 첫번째 주사위의 수
		for (j = 1; j <= 6; j++) {     // 두번째 주사위의 수
			for (k = 1; k <= 6; k++) {     // 세번째 주사위의 수
				if (N == i + j + k)
					printf("%d %d %d\n", i, j, k);     // 세 주사위의 합이 N과 같다면 세 수를 출력
			}
		}
	}
	return 0;
}
