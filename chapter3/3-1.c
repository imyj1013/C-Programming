#include <stdio.h>

int main()
{
	int a = 0;  // 변수 a 선언
	scanf("%x", &a);   // a에 16진수 정수를 입력받아 저장
	printf("decimal number = %u\n", a);   // 입력받은 16진수를 10진수로 출력
	printf("octal number = %o", a);   // 입력받은 16진수를 8진수로 출력
	return 0;
}
