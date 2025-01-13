#include <stdio.h> 

int main()
{
	int i, x[10], a;     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%d", &x[i]);     // 배열에 정수 입력받음
		if (i == 0)
			a = x[i];     // 첫번째 입력받은 수이면 최댓값 a에 저장
		if (x[i] > a)
			a = x[i];     // 입력받아 저장한 배열의 값이 최댓값a 보다 크다면 a에 저장
	}
	printf("%d", a);     // 저장된 수 중 최댓값을 출력
	return 0;
}
