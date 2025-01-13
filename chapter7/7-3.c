#include <stdio.h> 

int main()
{
	int i, X[10], Y[10], Z[10], sum;     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%d", &X[i]);     // 배열에 정수 입력받음
	}
	for (i = 0; i < 10; i++) {
		scanf("%d", &Y[i]);     // 배열에 정수 입력받음
	}
	for (i = 0; i < 10; i++) {
		Z[i] = X[i] + Y[i];     // 배열에 두 정수를 더한 값을 저장
		printf(" %d", Z[i]);     // 두 정수를 더한 값을 입력한 배열을 출력
	}
	return 0;
}
