#include<stdio.h>

int main()
{
	int a = 0;   // 변수 a 선언
	scanf("%d", &a);    // 값을 입력받아 a에 저장
	char ch = a;   // int형 변수 a를 char형 변수에 복사
	printf("(int->int) %d\n", a);   // a를 정수형태로 출력
	printf("(int->char->int) %d", ch);  // ch를 정수형태로 출력
	return 0;
}
