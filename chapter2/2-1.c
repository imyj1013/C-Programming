#include<stdio.h>

int main()
{
	int a = 0;   // 변수 a 선언
	int b = 0;   // 변수 b 선언
	scanf("%d", &a);   // 값을 입력받아 a에 저장
	scanf("%d", &b);   // 값을 입력받아 b에 저장
	int sum = a + b;   // 변수 sum에 a와 b를 더한 값을 저장
	printf("sum: %d", sum);   // 변수 sum을 정수형태로 출력
	return 0;
}
