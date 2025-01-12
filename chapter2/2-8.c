#include <stdio.h>

int main()
{
	int n;    // 변수 n 선언
	scanf("%d", &n);    // 정수를 입력받아 n에 저장
	printf("The %dth upper case letter in the English alphabet is %c.", n, n+'A');    // 정수와 문자가 혼합된 문장 출력
	return 0;
}
