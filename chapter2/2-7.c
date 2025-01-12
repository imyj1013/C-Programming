#include<stdio.h>

int main()
{
	char ch;   // 변수 선언
	scanf("%c", &ch);   // 문자를 입력받아 ch에 저장
	printf("%c is the %dth lower case letter in the English alphabet.", ch, ch - 'a');   // 문자와 정수가 혼합된 문장 출력
	return 0;
}
