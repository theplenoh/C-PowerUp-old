#include <stdio.h>

int main()
{
    int a, b;

    fputs("두 개의 숫자를 입력하세요: ", stdout);
    scanf("%d %d", &a, &b);

    printf("큰 수는 %d\n", (a>b)? a:b);

    return 0;
}
