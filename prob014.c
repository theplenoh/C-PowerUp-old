#include <stdio.h>

int main()
{
    int arr[5];
    int i, j, tmp;

    for(i=0; i<5; i++)
    {
        printf("숫자 %d입력: ", i+1);
        scanf("%d", &(arr[i]));
    }

    for(j=5; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(arr[i] > arr[i+1])
            {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }

    fputs("배열 상태: \n", stdout);
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
