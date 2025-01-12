#include <stdio.h>

int main()
{
	char ch;   // 변수 선언
	scanf("%c", &ch);   // 문자를 입력받아 ch에 저장
	printf("%c", ch - 'a' + 'A');   // 소문자를 대문자로 바꿔서 출력
	return 0;
}
