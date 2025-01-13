#include <stdio.h> 

int N;     // 변수 선언

void die1(int x)
{
	int i;
	for (i = 1; i <= 6; i++) {     // 주사위 눈만큼인 6번 반복
		die2(x, i);     // 함수 호출
	}
}

void die2(int x, int y)
{
	int i;
	for (i = 1; i <= 6; i++) {     // 주사위 눈만큼인 6번 반복
		die3(x, y, i);     // 함수 호출
	}
}

void die3(int x, int y, int z)
{
	if (x + y + z == N) {     // x, y, z를 모두 더한 값이 N이라면
		printf("%d %d %d", x, y, z);     // 주사위 눈인 x, y, z 출력
	}
}

int main()
{
	int i;
	scanf("%d", &N);      // 합을 입력받아 저장
	for (i = 1; i <= 6; i++) {     // 주사위 눈만큼인 6번 반복
		die1(i);     // 함수 호출
	}
	return 0;
}
