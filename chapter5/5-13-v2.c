#include <stdio.h> 

int main()
{
	int a, b, c, m;     // 변수선언
	double n;     // 변수선언
	scanf("%d %d %d", &a, &b, &c);     // 값을 입력받아 저장
	n = (a + b + c) / 3.0;      // 실수형 평균구하기
	m = (a + b + c) / 3;      // 정수형 평균구하기
	printf("%.2f\n", n);     // 평균을 소수점 아래 두번째자리까지 출력
	switch (m/25) {
	case 4:     // m/25가 4라면
		printf("A");     // A 출력
		break;
	case 3:     // m/25가 3이라면
		printf("A");     // A 출력
		break;
	case 2:     // m/25가 2이라면
		printf("B");     // B 출력
		break;
	default:
		printf("F");     // F 출력
		break;
	}
	return 0;
}
