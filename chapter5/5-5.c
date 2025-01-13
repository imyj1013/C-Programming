#include <stdio.h> 

int main()
{
	int a;    // 변수선언
	scanf("%d", &a);     // 값을 입력받아 저장
	if (a % 2 == 0 && a % 3 == 0 && a % 5 == 0)     // a가 2, 3, 5로 나누어 떨어진다면
		printf("A");     // A 출력
	else if (a % 2 == 0 && a % 3 == 0 && a % 5 != 0)     // a가 2, 3으로만 나누어 떨어진다면
		printf("B");     // B 출력
	else if (a % 2 == 0 && a % 3 != 0 && a % 5 == 0)     // a가 2, 5으로만 나누어 떨어진다면
		printf("C");     // C 출력
	else if (a % 2 != 0 && a % 3 == 0 && a % 5 == 0)     // a가 3, 5으로만 나누어 떨어진다면
		printf("D");     // D 출력
	else if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0)     // a가 2, 3, 5 중 그 어떠한 수로도 나누어지지 않는다면
		printf("N");     // N 출력
	else     // a가 2, 3, 5 중 하나로만 나누어 떨어진다면
		printf("E");     // E 출력
	return 0;
}
