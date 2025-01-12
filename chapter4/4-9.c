#include <stdio.h> 

int main()
{
	int N, M, a;   // 변수선언
	scanf("%d %d", &N, &M);   // 값을 입력받아 저장
	a = N >= M ? N : M;   // N, M중 더 큰 값을 a에 저장
	printf("%d", a);   // a 출력
	return 0;
}
