#include <stdio.h> 

int main()
{
	char ch;   // 변수 선언
	int a;   // 변수 선언
	scanf("%c", &ch);    // 문자를 입력받아 ch에 저장
	a = ('a' <= ch) && (ch <= 'z') || ('A' <= ch) && (ch <= 'Z');   // 문자가 알파벳인지 판단
	printf("%d", a);   // 결과값 출력
	return 0;
}
