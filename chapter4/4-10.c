#include <stdio.h> 

int main()
{
	int N, M, a, b;   // 변수 선언
	scanf("%d %d", &N, &M);   // 값을 입력받아 저장
	a = N >= M ? N : M;   // N, M중 더 큰 값을 a에 저장
	b = N <= M ? N : M;   // N, M중 더 작은 값을 b에 저장
	printf("%d\n", a/b);   // a를 b로 나눈 몫을 출력
	printf("%d", a % b);   // a를 b로 나눈 나머지를 출력
	return 0;
}
