#include <stdio.h>

int getArrSum2(int* arr, int col)
{
    int i, j;
    int sum = 0;

    for(i=0; i<2; i++)
    {
        for(j=0; j<col; j++)
            sum += *((arr+i*col) + j);
    }

    return sum;
}

int main()
{
    int arr3[2][2] = {1, 3, 5, 7};
    int arr4[2][3] = {1, 2, 3, 4, 5, 6};

    printf("%d \n", getArrSum2((int*)arr3, 2));
    printf("%d \n", getArrSum2((int*)arr4, 3));

    return 0;
}
