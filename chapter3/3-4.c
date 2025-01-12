#include <stdio.h> 

int main()
{
	int a, b, c;   // 변수 선언
	scanf("%d %d %d", &a, &b, &c);    // 값을 변수에 저장
	printf("purchase 1: %4d won\n", a);   // 자릿수를 맞춰서 가격 출력
	printf("purchase 2: %4d won\n", b);   // 자릿수를 맞춰서 가격 출력
	printf("purchase 3: %4d won\n", c);   // 자릿수를 맞춰서 가격 출력
	return 0;
}
