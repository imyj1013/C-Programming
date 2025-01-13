#include <stdio.h> 

int main()
{
	int a, b;     // 변수 선언
	int c = 1;     // 시행횟수 변수 선언, 초기화
	scanf("%d", &a);     // 기준 정수값을 입력받아 저장
	do {
		scanf("%d", &b);     // b값을 입력받아 저장
		if (b > a)     // b가 기준값보다 크다면
			printf("%d>?\n", b);     // b가 ?보다 크다고 출력
		else if (b < a)     // b가 기준값보다 작다면
			printf("%d<?\n", b);     // b가 ?보다 작다고 출력
		else {     // b가 기준값과 같다면
			printf("%d==?\n", b);     // b가 ?와 같다고 출력
			printf("%d\n", c);     // 시행 횟수 c를 출력
		}
		c += 1;     // c에 1을 더함
	} while (b != a);     // b가 기준값 a와 다를 때까지 반복
	return 0;
 }
