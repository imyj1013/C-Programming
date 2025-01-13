#include <stdio.h> 

int main()
{
	int a, b, c, d, e;   // 변수선언
	int sum = 0;   // 변수선언
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);   // 값을 입력 받아 저장
	if (a > 0)   // a가 양수이면
		sum += a;   // sum에 a를 더함
	if (b > 0)   // b가 양수이면
		sum += b;   // sum에 b를 더함
	if (c > 0)   // c가 양수이면
		sum += c;   // sum에 c를 더함
	if (d > 0)   // d가 양수이면
		sum += d;   // sum에 d를 더함
	if (e > 0)   // e가 양수이면
		sum += e;   // sum에 e를 더함
	printf("%d", sum);   // sum을 출력
	return 0;
}
