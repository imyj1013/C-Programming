#include<stdio.h>

int main()
{
	int n = 0;           // 변수 n 정의
	scanf("%d", &n);     // 값을 입력받아 n에 저장
	printf("%d%d%d%d%d%d\n", n, n, n, n, n, n);    // 첫번째줄에 nnnnnn 출력
	printf("%d    %d\n", n, n);      // 두번째줄에 n    n 출력
	printf("%d    %d\n", n, n);      // 세번째줄에 n    n 출력
	printf("%d%d%d%d%d%d\n", n, n, n, n, n, n);    // 네번째줄에 nnnnnn 출력
	return 0;
}
