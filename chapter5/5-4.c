#include <stdio.h> 

int main()
{
	char ch;    // 변수선언
	scanf("%c", &ch);    // 문자 입력받음
	if (ch >= 'A' && ch <= 'Z')    // ch가 대문자라면
		printf("%c", ch - 'A' + 'a');     // 소문자로 바꿔서 출력
	else if (ch >= 'a' && ch <= 'z')      // ch가 소문자라면
		printf("%c", ch - 'a' + 'A');     // 대문자로 바꿔서 출력
	else     // ch가 영문자가 아니라면
		printf("none");     // none 출력
	return 0;
}
