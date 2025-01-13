#include <stdio.h> 

int main()
{
	double x[10];     // 변수선언
	int i;     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%lf", &x[i]);     // 10개의 실수를 받아 배열에 저장
		if (x[i] > 0)
			printf(" %.1f", x[i]);     // 입력받은 실수가 0보다 크면 출력
	}
	return 0;
}
