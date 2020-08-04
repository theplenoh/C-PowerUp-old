#include <stdio.h>

int fac(int n)
{
    int i;
    int result=1;

    if(n<=0)
    {
        return -1;
    }
    else
    {
        for(i=1; i<=n; i++)
            result *= i;
        return result;
    }
}

int main()
{
    int input;

    while(1)
    {
        fputs("숫자 입력(1이상): ", stdout);
        scanf("%d", &input);

        if (fac(input)==-1)
            puts("입력이 잘못되어 예상치 못한 결과를 얻었습니다.");
        else
            printf("%d!: %d\n", input, fac(input));
    }

    return 0;
}
