#include <stdio.h> 

int main()
{
	int n;   // 변수 선언
	scanf("%d", &n);    // 값을 입력받아 변수에 저장
	n %= 1000;   // n을 1000으로 나눈 나머지 계산
	n /= 100;    // n을 100으로 나눔
	printf("%d", n);   // 백의 자리 출력
	return 0;
}
