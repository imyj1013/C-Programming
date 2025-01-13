#include <stdio.h> 

int main()
{
	int N;     // 변수 선언
	int sum = 0;     // 변수 선언, 초기화
	scanf("%d", &N);     // 값을 입력받아 저장
	while (N != 0) {     // N이 0이 아닐때 까지
		sum += N;     // sum에  N을 더함
		scanf("%d", &N);     // 값을 입력받아 저장
	}
	printf("%d", sum);     // 입력된 값들의 합을 출력
	return 0;
}
