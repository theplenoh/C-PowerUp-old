#include <stdio.h>
#include <string.h>

int main()
{
    char strTotal[80];
    char str1[20];
    char str2[20];
    char str3[20];
    char str4[20];
    char* strArr[4];
    int i, j;
    char* tmp;
    int cnt = 0;

    strArr[0] = str1;
    strArr[1] = str2;
    strArr[2] = str3;
    strArr[3] = str4;

    // Input
    for(i=0; i<4; i++)
    {
        printf("문자열 입력 %d: ", i+1);
        scanf("%s", strArr[i]);
    }

    // Processing
    for(j=3; j>=0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(strArr[i][0] > strArr[i+1][0])
            {
                tmp = strArr[i];
                strArr[i] = strArr[i+1];
                strArr[i+1] = tmp;
            }
        }
    }

    for(i=0; i<4; i++)
    {
        for(j=0; strArr[i][j]!='\0'; j++)
        {
            strTotal[cnt++] = strArr[i][j];
        }
        strTotal[cnt++]=' ';
    }
    strTotal[cnt++] = '\0';

    printf("%s\n", strTotal);

    return 0;
}
