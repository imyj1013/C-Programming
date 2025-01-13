#include <stdio.h>

int main()
{
	int N, M, P, i, result;     // 변수선언
	i = 1;     // i 초기화
	scanf("%d %d", &N, &M);     // N과 M을 입력받아 저장
	if (N < M) {     // N이 M보다 작다면
		P = N;     // P에 N 저장
		N = M;     // N에 M 저장
		M = P;     // M에 P 저장
	}
	while (i <= M) {     //  i가 M 이하일때까지 반복
		if (N % i == 0 && M % i == 0)     // N과 M을 i로 나눈 나머지가 0 이라면
			result = i;     // 최대공약수 result에 i 저장
		i++;     // i에 1을 더함
	}
	printf("%d", result);     // 최대공약수 result를 출력
	return 0;
 }
