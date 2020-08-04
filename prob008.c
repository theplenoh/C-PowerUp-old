#include <stdio.h>

int main()
{
    int i=0;
    int input, limit;
    int result[50];

    fputs("10진수 정수 입력: ", stdout);
    scanf("%d", &input);

    while(1)
    {
        result[i++] = input % 2;
        input = input / 2;
        if(input==0)
            break;
    }

    printf("%d\n", i);
    limit = i - 1;

    for(i=limit; i>=0; i--)
        printf("%d", result[i]);
    printf("\n");

    return 0;
}
