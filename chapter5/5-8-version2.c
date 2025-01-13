#include <stdio.h> 

int main()
{
	int N;    // 변수선언
	scanf("%d", &N);     // 값을 입력받아 저장
	if (N % 400 == 0)     // N이 400의 배수이면
		printf("leap year");      // leap year 출력
	else if (N % 100 == 0)     // N이 100의 배수이면
		printf("common year");     // common year 출력
	else if (N % 4 == 0)     // N이 4의 배수이면
		printf("leap year");     // leap year 출력
	else     // N이 400, 100, 4의 배수 중 그 무엇도 아니면
		printf("common year");     // common year 출력
	return 0;
}
