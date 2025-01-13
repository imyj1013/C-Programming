#include <stdio.h> 

int main()
{
	double x[10], a;     // 변수선언
	int i;     // 변수 선언
	a = 0;
	for (i = 0; i < 10; i++) {
		scanf("%lf", &x[i]);     // 10개의 실수를 받아 배열에 저장
		if (i == 0)
			a = x[i];     // 처음 입력받는 실수면 그냥 a에 저장
		if (x[i] < a)
			a = x[i];     // 입력받은 실수가 a보다 작으면 a에 그 실수 저장
	}
	printf("%.1f", a);     // 저장된 실수 중 가장 작은 실수 출력
	return 0;
}
