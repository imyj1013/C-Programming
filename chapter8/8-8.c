#include <stdio.h> 

int func2(x, a, b, c)     // 함수 func2
{
	int result;     // 변수 선언
	result = a * x * x + b * x + c;     // ax^2+bx+c의 값을 계산하여 저장
	return result;
}

int main()
{
	int x, a, b, c, p, q, r, result;     // 변수 선언
	scanf("%d", &x);     // 값을 입력받아 저장
	scanf("%d %d %d", &a, &b, &c);     // 계수를 입력받아 저장
	scanf("%d %d %d", &p, &q, &r);     // 계수를 입력받아 저장
	result = func2(x, a, b, c);     // func2 호출
	result = func2(result, p, q, r);     // func2 호출
	printf("%d", result);     // result 출력
	return 0;
}
