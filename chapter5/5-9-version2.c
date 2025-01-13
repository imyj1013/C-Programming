#include <stdio.h> 

int main()
{
	int a, b, c, p, q, r;     // 변수선언
	scanf("%d/%d/%d", &a, &b, &c);      // 값 입력받아 저장
	scanf("%d/%d/%d", &p, &q, &r);      // 값 입력받아 저장
	if (a > p)     // a가 p보다 크면
		printf("%04d/%02d/%02d", p, q, r);     // p/q/r 출력
	else if (a < p)     // a가 q보다 작으면
		printf("%04d/%02d/%02d", a, b, c);     // a/b/c 출력
	else if (b > q)    // b가 q보다 크면
		printf("%04d/%02d/%02d", p, q, r);     // p/q/r 출력
	else if (b < q)    // b가 q보다 작으면
		printf("%04d/%02d/%02d", a, b, c);     // a/b/c 출력
	else if (c > r)     // c가 r보다 크다면
		printf("%04d/%02d/%02d", p, q, r);     // p/q/r 출력
	else if (c < r)     // c가 r보다 작다면
		printf("%04d/%02d/%02d", a, b, c);     // a/b/c 출력
	else      // c와 r이 같다면
		printf("%04d/%02d/%02d*", a, b, c);    // a/b/c* 출력
	return 0;
}
