#include <stdio.h> 

int sum(int n)     // 함수 sum
{
	int a;     // 변수 선언
	a = n * (n + 1) / 2;    //  1부터 n까지의 합 계산
	return a;     // 합 a를 반환
}

int main()
{
	int N, i, result;     // 변수 선언
	scanf("%d", &N);     // 값을 입력받아 저장
	result = 0;     // 변수 초기화
	for (i = 0; i <= N; i++) {
		result += sum(i);     // 1부터 i까지의 합을 모두 더함
	}
	printf("%d", result);     // 합을 출력
	return 0;
}
