#include <stdio.h> 

int main()
{
	int n;   // 변수 선언
	scanf("%d", &n);   // 값을 입력받아 저장
	n += 500;    // n에 500을 더함
	n /= 1000;   // n을 1000으로 나눔
	n *= 1000;   // n에 1000을 곱함
	printf("%d", n);    // 백의 자리에서 반올림한 값 출력
	return 0;
}
