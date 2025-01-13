#include <stdio.h> 

int is_prime(int x);     // 함수 선언
int next_prime(int x);     // 함수 선언

int main()
{
	int N, M, i, a;
	scanf("%d %d", &N, &M);     // 값을 입력받아 저장
	a = N;
	for (i = 1; i <= M; i++) {     // M개의 소수 찾기
		printf(" %d", next_prime(a+1));     // 소수 출력
		a = next_prime(a+1);
	}
	return 0;
}

int is_prime(int x)
{
	int i, c, result;
	c = 0;
	for (i = 1; i <= x; i++) {     // 1부터 x까지 반복
		if (x % i == 0) {
			c += 1;     // i가 x의 약수이면 c에 1을 더함
		}
	}
	if (c == 2) {
		result = 1;     // 소수이면 result에 1 저장
	}
	else {
		result = 0;     //  소수가 아니면 result에 0 저장
	}
	return result;     // result 반환
}

int next_prime(int x)
{
	int result;
	while (is_prime(x) != 1) {     // 정수 x가 소수가 아닐 때까지 반복
		x += 1;     // x에 1을 더함
	}
	result = x;     // result에 x를 저장
	return result;     // result 반환
}
