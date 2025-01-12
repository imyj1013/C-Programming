#include <stdio.h> 

int main()
{
	double a;   // 변수 선언
	scanf("%lf", &a);   // 값을 입력받아 변수에 저장
	a += 0.5;   // 변수에 0.5 더함
	printf("rounded up to %d", (int)a);   // 정수형태로 변수 출력
	return 0;
}
