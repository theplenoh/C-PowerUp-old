#include <stdio.h>

int main()
{
    char myStr[256];
    int diff = 'a' - 'A';
    int i;

    fputs("문자열 입력 : ", stdout);
    fgets(myStr, 256, stdin);

    for(i=0; myStr[i]!='\0'; i++)
    {
        if('a' <= myStr[i]&&myStr[i] <= 'z')
            myStr[i] -= diff;
        else if('A' <= myStr[i]&&myStr[i] <= 'Z')
            myStr[i] += diff;
    }

    printf("%s", myStr);

    return 0;
}
