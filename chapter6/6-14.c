#include <stdio.h> 

int main() {
    int M, N, i, j, a;     // 변수 선언
    scanf("%d %d", &M, &N);
    
    if (M < N) {
        for (i = M; i <= N; i++) {     // M부터 N까지 반복
            a = 1;
            printf("%d!=", i);         // i!을 계산할 것이라 출력
            for (j = 1; j <= i; j++) {
                a *= j;               // 1부터 i까지 곱함
                if (j == i)
                    printf("%d", j);  // 마지막 항은 별표 없이 출력
                else
                    printf("%d*", j); // 중간에 * 표시
            }
            printf("=%d\n", a);       // 팩토리얼 값 출력
        }
    } else {
        for (i = M; i >= N; i--) {     // M부터 N까지 역순 반복
            a = 1;
            printf("%d!=", i);         // i!을 계산할 것이라 출력
            for (j = 1; j <= i; j++) {
                a *= j;               // 1부터 i까지 곱함
                if (j == i)
                    printf("%d", j);  // 마지막 항은 별표 없이 출력
                else
                    printf("%d*", j); // 중간에 * 표시
            }
            printf("=%d\n", a);       // 팩토리얼 값 출력
        }
    }
    return 0;
}
