#include <stdio.h> 

int main()
{
	int i, x[10];     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%d", &x[i]);     // 배열에 정수 입력받음
		if (x[i] % 2 == 0)     // 입력받은 수가 짝수라면
			printf(" %d", x[i]);     // 입력받아 배열에 저장한 수 출력
	}
	return 0;
}
