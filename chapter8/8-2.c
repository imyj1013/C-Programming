#include <stdio.h> 

int sum(int n)     // 함수 sum
{
	int a;     // 변수 선언
	a = n * (n + 1) / 2;     // 1부터 n까지의 합 계산
	return a;     // 합 a를 반환
}

int main()
{
	int A, B, result;     // 변수 선언
	scanf("%d %d", &A, &B);     // 값을 입력받아 저장
	result = sum(B) - sum(A-1);     // A부터 B까지의 합 계산
	printf("%d", result);     // A부터 B까지의 합 출력
	return 0;
}
