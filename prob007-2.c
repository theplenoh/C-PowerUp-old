#include <stdio.h>

int main()
{
    int a, b, c;

    fputs("세 개의 숫자를 입력하세요: ", stdout);
    scanf("%d %d %d", &a, &b, &c);

    printf("큰 수는 %d\n", (a > b)? a:((b > c)? b:c));

    return 0;
}
