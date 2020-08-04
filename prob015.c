#include <stdio.h>

void cleanStdin()
{
    int c;
    do {
        c = getchar();
    } while(c != '\n' && c != EOF);
}

int main()
{
    char ch;
    int eof;

    while(1)
    {
        fputs("ch: ", stdout);
        eof = scanf("%c", &ch);
        if(eof == EOF)
        {
            fputs("\n", stdout);
            break;
        }

        if('a' <= ch&&ch <= 'z')
            fputs("입력하신 문자는 알파벳 소문자입니다.\n", stdout);
        else if('A' <= ch&&ch <= 'Z')
            fputs("입력하신 문자는 알파벳 대문자입니다.\n", stdout);
        else if('0' <= ch&&ch <= '9')
            fputs("입력하신 문자는 아라비아 숫자입니다.\n", stdout);
        else
            fputs("특수문자를 입력하셨군요.\n", stdout);

        cleanStdin();
    }

    fputs("프로그램을 종료합니다.\n", stdout);

    return 0;
}
