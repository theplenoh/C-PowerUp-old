#include <stdio.h>

int main()
{
    int tmp, i;
    int n1, n2;
    int sum = 0;

    fputs("두 개의 정수 입력: ", stdout);
    scanf("%d %d", &n1, &n2);

    if(n1 > n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    for(i=n1; i<=n2; i++)
    {
        if((i%3==0) || (i%5==0))
        {
            printf("%d는 합에서 제외.\n", i);
            continue;
        }
        sum+=i;
    }

    printf("%d과(와) %d을(를) 포함하여 그 사이에 있는 정수들의 합: %d\n", n1, n2, sum);

    return 0;
}
