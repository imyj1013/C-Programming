#include <stdio.h> 

int func2(x, a, b, c)     // 함수 func2
{
	int result;     // 변수 선언
	result = a * x * x + b * x + c;     // ax^2+bx+c의 값을 계산하여 저장
	return result;
}

int main()
{
	int x, p, q, r;     // 변수 선언
	scanf("%d", &x);     // 값을 입력받아 저장
	scanf("%d %d %d", &p, &q, &r);     // 계수를 입력받아 저장
	printf("%d", func2(x, p, q, r));     // func2 호출
	return 0;
}
