#include <stdio.h> 

int main()
{
	int n, TTHO, THO, HUN, TEN;  // 변수 선언
	scanf("%d", &n);   // 값을 입력받아 n에 저장
	TTHO = n / 10000;   // 만의 자리수 계산
	n %= 10000;   // n을 10000으로 나눈 나머지 계산
	THO = n / 1000;   // 천의 자리수 계산
	n %= 1000;   // n을 1000으로 나눈 나머지 계산
	HUN = n / 100;   // 백의 자리수 계산
	n %= 100;   // n을 100으로 나눈 나머지 계산
	TEN = n / 10;   // 십의 자리수 계산
	n %= 10;   // n을 10으로 나눈 나머지 계산
	printf("%dTTHO %dTHO %dHUN %dTEN %d", TTHO, THO, HUN, TEN, n);   // 자릿수별로 나누어 출력
	return 0;
}
