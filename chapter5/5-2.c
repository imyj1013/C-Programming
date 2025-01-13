#include <stdio.h> 

int main()
{
	int N, M;   // 변수선언
	scanf("%d %d", &N, &M);   // 값을 입력받아 저장
	if (N * N == M)   // N의 제곱이 M이라면 
		printf("%d*%d=%d", N, N, M);   // N*N=M을 출력
	else {
		if (M * M == N)   // N의 제곱이 M이 아니고 M의 제곱이 N이라면
			printf("%d*%d=%d", M, M, N);   // M*M=N을 출력
		else   // N의 제곱이 M이 아니고 M의 제곱이 N이 아니라면
			printf("none");   // none 출력
	}
	return 0;
	
}
