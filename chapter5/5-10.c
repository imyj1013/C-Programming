#include <stdio.h> 

int main()
{
	int a, b, c;    // 변수선언
	double n;     // 변수선언
	scanf("%d %d %d", &a, &b, &c);     // 값을 입력받아 저장
	n = (a + b + c) / 3.0;     // a, b, c의 평균 계산하여 저장
	if (n >= 91.5)     // n이 91.5 이상이면
		printf("A");     // A 출력
	else if (n >= 85.5)     // n이 85.5 이상, 91.5미만이면
		printf("B");     // B 출력
	else if (n >= 80.5)     // n이 80.5 이상, 85.5미만이면
		printf("C");     // C 출력
	else     // n이 80.5 미만이면
		printf("F");     // F 출력
	if (a == 100 || b == 100 || c == 100)      // a, b, c 중 하나라도 100점이라면
		printf("Good");     // Good 출력
	if (a < 60 || b < 60 || c < 60)      // a, b, c 중 하나라도 60 미만이라면
		printf("Bad");     // Bad 출력
	return 0;
}
