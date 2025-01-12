#include<stdio.h>

int main()
{
	int month, date = 0;   // 변수 month, date 정의
	scanf("%d", &month);   // 값을 입력받아 month에 저장
	scanf("%d", &date);    // 값을 입력받아 date에 저장
	printf("My birthday is month %d date %d.", month, date);   // month, date는 정수형태로 출력
	return 0;
}
