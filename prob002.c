#include <stdio.h>

int main()
{
    char myStr[50];

    printf("문자열 입력: ");
    fgets(myStr, 50, stdin);

    printf("입력된 문자열: %s\n", myStr);

    return 0;
}
