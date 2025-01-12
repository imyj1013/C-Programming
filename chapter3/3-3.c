#include <stdio.h> 

int main()
{
	double a;   // 변수 a 선언
	double b;   // 변수 b 선언
	scanf("%lf", &a);   // 부동소수를 입력받아 a에 저장
	scanf("%lf", &b);   // 부동소수를 입력받아 b에 저장
	printf("area = %.2f", a*b);   // 넓이 출력
	return 0;
}
