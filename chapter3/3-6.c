#include <stdio.h> 

int main()
{
	int a, b, c;  // 변수 선언
	scanf("%d/%d/%d", &a, &b, &c);  // 년, 월, 일을 입력받아 a, b, c에 저장
	printf("year %04d month %02d date %02d", a, b, c);  // 문자와 정수가 혼합된 문장을 출력
	return 0;
}
