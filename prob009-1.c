#include <stdio.h>

int main()
{
    int input;
    int sum = 0;
    int i;

    while(1)
    {
        fputs("1이상의 정수 입력: ", stdout);
        scanf("%d", &input);
        if(input<0)
        {
            fputs("1이상의 정수를 입력해야 합니다.\n", stdout);
            continue;
        }
        break;
    }

    for(i=1; i<=input; i++)
        sum+=i;

    printf("1부터 %d까지의 합은 %d.\n", input, sum);

    return 0;
}
