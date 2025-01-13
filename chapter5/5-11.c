#include <stdio.h> 

int main()
{
	int a, b, c, p, q, r, S, B;    // 변수선언
	scanf("%d %d %d", &a, &b, &c);     // 값을 입력받아 저장
	scanf("%d %d %d", &p, &q, &r);     // 값을 입력받아 저장
	S = 0;     // 변수 초기화
	B = 0;     // 변수 초기화
	if (a == p)     // a와 p가 같다면
		S += 1;    // 스트라이크 값 1만큼 추가
	else if (a == q || a == r)     // a가 q나 r과 같다면
		B += 1;    // 볼 값 1만큼 추가
	if (b == q)     // b가 q와 같다면
		S += 1;    // 스트라이크 값 1만큼 추가
	else if (b == p || b == r)    // b가 p나 r과 같다면
		B += 1;    // 볼 값 1만큼 추가
	if (c == r)     // c와 r이 같다면
		S += 1;    // 스트라이크 값 1만큼 추가
	else if (c == p || c == q)    // c가 p나 q와 같다면
		B += 1;    // 볼 값 1만큼 추가
	printf("%dS%dB", S, B);     // 스트라이크, 볼값을 출력
	return 0;
}
