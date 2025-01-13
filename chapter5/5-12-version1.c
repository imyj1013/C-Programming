#include <stdio.h> 

int main()
{
	int N, M;     // 변수선언
	scanf("%d", &N);     // 메뉴값을 입력받아 저장
	scanf("%d", &M);     // 투입금액을 입력받아 저장
	if (N == 1) {     // N이 1이라면
		printf("Americano\n");     // Americano 출력
		printf("%d %d", (M - 500) / 500, ((M-500) - ((M - 500) / 500) * 500) / 100);     // 잔돈의 갯수 출력
	}
	else if (N == 2) {     // N이 2라면
		printf("Cafe Latte\n");     // Cafe Latte 출력
		printf("%d %d", (M - 400) / 500, ((M-400) - ((M - 400) / 500) * 500) / 100);     // 잔돈의 갯수 출력
	}
	else {     // N이 3이라면
		printf("Lemon Tea\n");     // Lemon Tea 출력
		printf("%d %d", (M - 300) / 500, ((M-300) - ((M - 300) / 500) * 500) / 100);      // 잔돈의 갯수 출력
	}
	return 0;
}
