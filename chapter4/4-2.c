#include <stdio.h> 

int main()
{
	int hour, minute, second;   // 변수 선언
	scanf("%d", &second);   // 초를 입력받아 변수에 저장
	hour = second / 3600;   // 시 계산
	second %= 3600;    // 초를 3600으로 나눈 나머지 계산
	minute = second / 60;   // 분 계산
	second %= 60;    // 초를 60으로 나눈 나머지 계산
	printf("%d:%d:%d", hour, minute, second);   // 시, 분, 초 로 나누어 출력
	return 0;
}
