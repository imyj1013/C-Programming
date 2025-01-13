#include <stdio.h> 

int main()
{
	int x[10], a, i, j, N, M;     // 변수 선언
	scanf("%d", &N);     // 몇개의 정수를 입력받을지 입력받음
	M = 0;     // 결과값 초기화
	for (i = 0; i < N; i++) {
		scanf("%d", &x[i]);     // 0 포함한 한자리 양의 정수 N개를 입력받음
	}
	for (i = 0; i < N; i++) {
		a = x[i];     // a에 x[i]를 저장
		for (j = 1; j <= N - i - 1; j++) {
			a *= 10;     // 자리수에 맞게 10을 여러번 곱함
		}
		M += a;     // 결과값 M에 a를 더함
	}
	printf("%d", M);     // 입력받은 N개의 정수로 이루어진 결과값 M을 출력
	return 0;
}
