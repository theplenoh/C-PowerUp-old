#include <stdio.h>

int main()
{
    int n;
    int i, sum=0, sum_before=0;

    printf("n(2 이상): ");
    scanf("%d", &n);

    while(1)
    {
        if(n<2)
        {
            printf("2 이상을 입력하셔야 합니다.\n");
            continue;
        }
        break;
    }

    for(i=1; i<=n; i++)
    {
        sum+=i;
        if(sum>n)
        {
            printf("%d을 더할 때 처음 %d을(를) 넘기 시작한다.\n", i, n);
            sum_before = sum - i;
            break;
        }
    }

    printf("sum_before: %d\n", sum_before);
    printf("sum: %d\n", sum);

    return 0;
}
