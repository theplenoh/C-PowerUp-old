#include <stdio.h>

int main()
{
    double radius;

    fputs("반지름 입력: ", stdout);
    scanf("%lf", &radius);

    printf("원의 넓이: %lf\n", radius*radius*3.14);

    return 0;
}
