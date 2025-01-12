#include <stdio.h> 

int main()
{
	double N,r, area;   // 변수 선언
	int m;   // 변수 선언
	scanf("%lf", &N);   // 값을 입력받아 저장
	r = N / (2 * 3.14);    // 반지름 구함
	area = 3.14 * r * r;    // 넓이 구함
	area += 0.5;   // 넓이에 0.5 더함
	area *= 10;    // 넓이에 10을 곱함
	m = area / 10;    // 넓이에 10을 나눔
	printf("%d", m);    // 넓이를 소수 첫째자리에서 반올림한 값을 출력
	return 0;
}
