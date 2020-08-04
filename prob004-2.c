#include <stdio.h>

void clearStdin()
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    int num;
    int sum = 0;
    int ret;

    while(1)
    {
        fputs("Data input(Ctrl+Z to exit): ", stdout);
        ret = scanf("%d", &num);
        if(ret == EOF)
            break;
        sum += num;
        clearStdin();
    }
    printf("총 합: %d\n", sum);

    return 0;
}
