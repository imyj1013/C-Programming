#include <stdio.h> 

int main()
{
	int i, x[10], sum;     // 변수 선언
	sum = 0;     // 합계 변수 sum 초기화
	for (i = 0; i < 10; i++) {
		scanf("%d", &x[i]);     // 배열에 정수 입력받음
		sum += x[i];     // sum에 입력받은 수 더함
	}
	printf("%d", sum);     // 저장된 정수 합 출력
	return 0;
}
