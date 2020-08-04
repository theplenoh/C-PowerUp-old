#include <stdio.h>

int main()
{
    int input, eof;
    int i;

    while(1)
    {
        fputs("1이상의 정수 입력: ", stdout);
        eof = scanf("%d", &input);
        if (eof == EOF)
        {
            fputs("EOF 입력에 의해 프로그램을 종료합니다.\n", stdout);
            break;
        }
        if (input < 0)
        {
            fputs("1이상의 입력을 필요로 합니다. 다시 입력하세요.\n", stdout);
            continue;
        }

        printf("%d의 약수들\n", input);
        for(i=1; i<=input; i++)
        {
            if(input%i == 0)
            {
                printf("%d ", i);
            }
        }
        fputs("\n", stdout);
        fputs("\n", stdout);
    }

    return 0;
}
