#include <stdio.h> 

int main()
{
	int a, b, c;    // 변수선언
	scanf("%d %d %d", &a, &b, &c);    // 값을 입력받아 저장
	if (a >= b && a >= c) {    // a가 b 이상이면서 c 이상이라면
		if (b >= c)    // b가 c 이상이라면
			printf("%d %d", a, c);    // 최댓값 a, 최솟값 c 출력
		else    // b가 c보다 작다면
			printf("%d %d", a, b);    // 최댓값 a, 최솟값 b 출력
	}
	else    // a가 최댓값이 아니라면
		if (b >= c) {    // b가 c 이상이라면
			if (a >= c)     // a가 c 이상이라면
				printf("%d %d", b, c);    // 최댓값 b, 최솟값 c 출력
			else    // a가 c 보다 작다면
				printf("%d %d", b, a);    // 최댓값 b, 최솟값 a 출력
		}
		else     // b가 c 보다 작다면
			if (a >= b)     // a가 b 이상이라면
				printf("%d %d", c, b);    // 최댓값 c, 최솟값 b 출력
			else     // a가 b보다 작다면
				printf("%d %d", c, a);    // 최댓값 c, 최솟값 a 출력
	return 0;
		
}
