#include <stdio.h>

int main()
{
    int n1, n2;
    int sum = 0;
    int i, tmp;

    fputs("n1: ", stdout); scanf("%d", &n1);
    fputs("n2: ", stdout); scanf("%d", &n2);
    if (n1>n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    for(i=n1; i<=n2; i++)
        sum+=i;

    printf("sum: %d\n", sum);

    return 0;
}
