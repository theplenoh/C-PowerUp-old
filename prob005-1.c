#include <stdio.h>

int main()
{
    double dbl1, dbl2;

    printf("두 개의 실수 입력: ");
    scanf("%lf %lf", &dbl1, &dbl2);

    printf("덧셈 결과: %lf\n", dbl1+dbl2);
    printf("뺄셈 결과: %lf\n", dbl1-dbl2);
    printf("곱셈 결과: %lf\n", dbl1*dbl2);
    printf("나눗셈 결과: %lf\n", dbl1/dbl2);

    return 0;
}
