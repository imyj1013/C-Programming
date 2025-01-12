#include <stdio.h> 

int main()
{
	int N;   // 변수 선언
	scanf("%d", &N);   // 값을 입력받아 저장
	N % 2 == 0 ? printf("even") : printf("odd") ;   // N이 짝수면 even을, 홀수면 odd를 출력
	return 0;
}
