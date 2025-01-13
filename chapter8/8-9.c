#include <stdio.h> 

int max1, max2;     // 변수 선언

void update_max(int x)
{
	if (x > max1) {     // x가 max1보다 크면
		max2 = max1;     // max1을 max2에 저장
		max1 = x;     // max1에 x를 저장
	}
	else if (x > max2) {     // x가 max2보다 크고 max1보다 작으면
		max2 = x;     // max2에 x를 저장
	}
}

int main()
{
	int N;     //  변수 선언
	scanf("%d", &N);
	max1 = N;      // 정수 입력받아 max1에 저장
	scanf("%d", &N);
	if (N > max1) {      // 새로 입력받은 정수가 max1보다 크면
		max2 = max1;     // max1을 max2에 저장
		max1 = N;     // max1에 x를 저장
	}
	else {
		max2 = N;     // 새로 입력받은 정수가 max1보다 크지 않으면 max2에 저장
	}
	scanf("%d", &N);
	while (N != 0) {     // 0이 입력될때까지 반복
		update_max(N);     // 함수 호출
		scanf("%d", &N);
	}
	printf("%d %d", max1, max2);     // 가장 큰값과 두번째로 큰값 출력
	return 0;
}
