#include <stdio.h> 

int main()
{
	int N;   // 변수 선언
	scanf("%d", &N);   // 값을 입력받아 저장
	if (N < 0)   // N이 음수라면
		printf("cold, indoor");   // cold, indoor 출력
	if (N >= 0 && N < 40)   // N이 0이상 40미만이라면
		printf("moderate, outdoor");   // moderate, outdoor 출력
	if (N >= 40)   // N이 40이상이라면
		printf("hot, indoor");   // hot, indoor 출력
	return 0;
}
