#include <stdio.h> 

int main()
{
	int N, i, j, a;     // 변수 선언
	a = 0;     // 3이 나타나는 횟수 초기화
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {     // 1부터 N까지의 수 중 3이 나타나는지 확인
		j = i;
		while (j >= 1) {     // j가 1이상 일때까지 반복
			if (j % 10 == 3)
				a += 1;     // j의 일의 자리가 3이면 a에 1을 더함
			j /= 10;     // j를 10으로 나눔
		}
	}
	printf("%d", a);     // 3이 나타나는 횟수 출력
	return 0;
}
