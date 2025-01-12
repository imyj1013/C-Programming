#include <stdio.h> 

int main()
{
	int a, b;    // 변수 a, b 선언
	scanf("%d", &a);   // 값을 입력받아 a에 저장
	scanf("%d", &b);   // 값을 입력받아 b에 저장
	int area = a * b;   // 변수 area에 a와 b의 곱을 저장
	printf("area = %d", area);   // area를 정수형태로 출력
	return 0;
}
