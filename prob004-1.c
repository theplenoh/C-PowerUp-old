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
    char ch;
    int cnt = 0;

    while(1)
    {
        fputs("Data input(Ctrl+Z to exit): ", stdout);
        ch = getchar();
        if (ch == EOF)
            break;
        cnt++;
        clearStdin();
    }
    printf("입력된 문자의 수: %d\n", cnt);

    return 0;
}
