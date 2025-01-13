#include <stdio.h> 

int a, b, c;     // 변수 선언

int count_strike(int x, int y, int z)
{
	int result = 0;
	if (x == a) {     // x와 a가 같다면
		result += 1;     // 스트라이크 값에 1을 더함
	}
	if (y == b) {     // y와 b가 같다면
		result += 1;     // 스트라이크 값에 1을 더함
	}
	if (z == c) {     // z와 c가 같다면
		result += 1;     // 스트라이크 값에 1을 더함
	}
	return result;     // 스트라이크 값 반환
}

int count_ball(int x, int y, int z)
{
	int result = 0;
	if (x == b) {     // x와 b가 같다면
		result += 1;     // 볼 값에 1을 더함
	}
	if (x == c) {     // x와 c가 같다면
		result += 1;     // 볼 값에 1을 더함
	}
	if (y == a) {     // y와 a가 같다면
		result += 1;     // 볼 값에 1을 더함
	}
	if (y == c) {     // y와 c가 같다면
		result += 1;     // 볼 값에 1을 더함
	}
	if (z == a) {     // z와 a가 같다면
		result += 1;     // 볼 값에 1을 더함
	}
	if (z == b) {     // z와 b가 같다면
		result += 1;     // 볼 값에 1을 더함
	}
	return result;     // 볼 값을 반환
}


int main()
{
	int x, y, z;     // 변수 선언
	scanf("%d %d %d", &a, &b, &c);     // 정답값 입력받음
	scanf("%d %d %d", &x, &y, &z);     // 추측값 입력받음
	while (count_strike(x, y, z) != 3) {
		printf("%dS%dB\n", count_strike(x, y, z), count_ball(x, y, z));     // 스트라이크와 볼 갯수 출력
		scanf("%d %d %d", &x, &y, &z);     // 추측값 입력받음
	}
	printf("%dS%dB\n", count_strike(x, y, z), count_ball(x, y, z));     // 스트라이크와 볼 갯수 출력
	return 0;
}
