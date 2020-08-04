#include <stdio.h>

int main()
{
    char ch;
    int num;
    double dbl;
    char str[50];

    printf("[문자, 정수, 실수, 문자열]의 포맷으로 입력: ");
    scanf("%c, %d, %lf, %s", &ch, &num, &dbl, str);

    printf("입력된 데이터 출력: %c, %d, %lf, %s\n", ch, num, dbl, str);

    return 0;
}
