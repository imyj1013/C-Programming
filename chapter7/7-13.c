#include <stdio.h> 

int main()
{
	char x[10];     // 변수 선언
	int i;     // 변수 선언
	for (i = 0; i < 10; i++) {
		scanf("%c", &x[i]);     // 10개의 문자를 입력받아 배열에 저장
		if (x[i] >= 'A' && x[i] <= 'Z')     // 입력받은 문자가 대문자이면
			printf(" %c", x[i]);     // 대문자인 그 문자를 출력
	}
	return 0;
}
