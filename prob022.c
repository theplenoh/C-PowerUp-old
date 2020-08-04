#include <stdio.h>
#include <string.h>

void cleanStdin()
{
    int c;
    do {
        c = getchar();
    } while(c != '\n' && c != EOF);
}

int getNumCharsInStr(char ch, const char* str)
{
    int len=strlen(str);
    int chCnt=0;
    int i;

    for(i=0; str[i]!='\0'; i++)
        if(str[i] == ch)
            chCnt++;

    return chCnt;
}

int main()
{
    char myStr[100];
    char target;

    fputs("대상 문자열 입력: ", stdout);
    fgets(myStr, 100, stdin);

    fputs("세어 볼 문자열 입력: ", stdout);
    scanf("%c", &target);

    printf("%c의 개수: %d\n", target, getNumCharsInStr(target, myStr));

    return 0;
}
