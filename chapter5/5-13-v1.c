#include <stdio.h> 

int main()
{
	int a, b, c;     // 변수선언
	double n;     // 변수선언
	scanf("%d %d %d", &a, &b, &c);     // 값을 입력받아 저장
	n = (a + b + c) / 3.0;     // a, b, c의 평균 계산하여 저장
	printf("%.2f\n", n);     // 평균을 소수점 아래 두번째자리까지 출력
	if (n >= 75)     // 평균이 75이상이면
		printf("A");     // A 출력
	else if (n >= 50)     // 평균이 50이상, 75미만이면
		printf("B");     // B 출력
	else      // 평균이 50 미만이면
		printf("F");     // F 출력
	return 0;
}
