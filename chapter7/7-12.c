#include <stdio.h> 

int main()
{
	int i, j, y[10] = { 0 };     // 변수 선언
	double x[10];     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%lf", &x[i]);     // 배열에 실수 입력받음
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (x[i] > x[j])     // 각 정수보다 작은 정수의 개수 구함
				y[i] += 1;     // x[i]보다 x[j]가 더 작으면 y[i]에 1을 더함
		}
		printf(" %d", y[i]);     // 배열에 저장된 각 정수보다 작은 정수의 개수를 출력
	}
	return 0;
}
