#include<stdio.h>

int main()
{
	char ch;   // 변수 ch 선언
	scanf("%c", &ch);   // 문자를 입력받아 ch에 저장
	printf("(%%c) %c\n", ch);   // 문자형태로 출력
	printf("(%%d) %d", ch-'0');   // 정수형태로 출력
	return 0;
}
