#include <stdio.h> refactor: organize resources

int main()
{
	int N, a;   // 변수 선언
	scanf("%d", &N);    // 값을 입력받아 N에 저장
	a = (20 <= N ) && ( N <= 30);   // 20 이상 30 이하인지 판단
	printf("%d", a);   // 결과값 출력
	return 0;
}
