#include <stdio.h>

int divInt(int quo, int divisor, int* result)
{
    if(divisor==0)
        return -256;
    else
    {
        result[0] = quo / divisor;
        result[1] = quo % divisor;
        return 1;
    }
}

int main()
{
    int num, divisor;
    int result[2];

    while(1)
    {
        fputs("나눗셈 위한 두 정수 입력: ", stdout);
        scanf("%d %d", &num, &divisor);
        if(divInt(num, divisor, result) == -256)
        {
            puts("0으로 나누는 오류발생! 숫자 재 입력\n");
            continue;
        }
        printf("몫: %d, 나머지: %d\n", result[0], result[1]);
    }

    return 0;
}
