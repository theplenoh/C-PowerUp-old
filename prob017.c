#include <stdio.h>
#include <string.h>

#define ARR_SZ 5
#define STR_MAX 20

int main()
{
    char str[5][20];
    char tmp[20];
    int i, j;

    // Input
    for(i=0; i<5; i++)
    {
        printf("문자열 입력 %d: ", i+1);
        scanf("%s", str[i]);
    }

    // Processing
    for(j=4; j>=0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(strlen(str[i]) > strlen(str[i+1]))
            {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], tmp);
            }
        }
    }

    // Display Status
    for(i=0; i<5; i++)
    {
        puts(str[i]);
    }

    return 0;
}
