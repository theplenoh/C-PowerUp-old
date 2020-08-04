#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum_even=0, sum_odd=0;

    while(1)
    {
        fputs("n: ", stdout);
        scanf("%d", &n);
        if(n < 0)
        {
            fputs("n이 0보다 커야합니다.", stdout);
            continue;
        }
        break;
    }

    for(i=1; i<=n; i++)
    {
        if(i%2==0)//even numbers
            sum_even += i;
        else
            sum_odd += i;
    }

    printf("홀수의 합: %d\n", sum_odd);
    printf("짝수의 합: %d\n", sum_even);

    return 0;
}
