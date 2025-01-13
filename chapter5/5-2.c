#include <stdio.h> 

int main()
{
	int N, M, a, b;   // 변수 선언
	scanf("%d %d", &N, &M);   // 값을 입력받아 저장
	a = N >= M ? N : M;   // N, M중 더 큰 값을 a에 저장
	b = N <= M ? N : M;   // N, M중 더 작은 값을 b에 저장
	if (b * b == a)   // b의 제곱이 a이라면 
		printf("%d*%d=%d", b, b, a);   // b*b=a를 출력
	else   // b의 제곱이 a가 아니라면
		printf("none");   // none을 출력
	return 0;
}
