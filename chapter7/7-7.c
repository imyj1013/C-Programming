#include <stdio.h> 

int main()
{
	int i, j, a, x[10];     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%d", &x[i]);     // 배열에 정수 입력받음
	}
	for (i = 0; i < 10; i++) {
		a = 0;     // 입력받은 정수가 나타나는 횟수에 대한 변수 초기화
		for (j = 0; j < i; j++) {
			if (x[i] == x[j])      // 동일한 수가 입력되었다면
				a += 1;     // 입력받은 정수가 나타나는 횟수에 대한 변수에 1을 더함
		}
		if (a == 0)
			printf(" %d", x[i]);      // 중복되지 않은 수라면 그 수를 출력
	}
	return 0;
}