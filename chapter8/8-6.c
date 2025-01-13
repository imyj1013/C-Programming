#include <stdio.h> 

int func1(x)     // 함수 func1
{
	int a;     // 변수 선언
	a = 2 * x * x - 5 * x + 1;     // a에 f(x)의 값을 계산하여 저장
	return a;     // a 반환
}

int main()
{
	int x;     // 변수 선언
	scanf("%d", &x);     // 값을 입력받아 저장
	printf("%d", func1(x));     // func1 호출
	return 0;
}
