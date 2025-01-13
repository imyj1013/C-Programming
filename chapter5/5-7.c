#include <stdio.h> 

int main()
{
	int N, M;    // 변수 선언
	scanf("%d", &N);     // 정답값을 입력받아 저장
	scanf("%d", &M);     // 추측값을 입력받아 저장
	if (M == N)     // M이 N이라면
		printf("RIGHT\n");     // RIGHT 출력
	else if (M > N) {     // M이 N보다 크다면
		printf("DOWN\n");     // DOWN 출력
		scanf("%d", &M);     // 추측값을 입력받아 저장
		if (M == N)     // M이 N이라면
			printf("RIGHT\n");     // RIGHT 출력
		else if (M > N)      // M이 N보다 크다면
			printf("DOWN\n");     // DOWN 출력
		else      // M이 N보다 작다면
			printf("UP\n");     // UP 출력
	}
	else {     // M이 N 보다 작다면
		printf("UP\n");     // UP 출력
		scanf("%d", &M);     // 추측값을 입력받아 저장
		if (M == N)      // M이 N이라면
			printf("RIGHT\n");     // RIGHT 출력
		else if (M > N)     // M이 N보다 크다면
			printf("DOWN\n");     // DOWN 출력
		else     // M이 N보다 작다면
			printf("UP\n");     // UP 출력
	}
	return 0;
}
