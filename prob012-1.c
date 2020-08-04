#include <stdio.h>

int main()
{
    int choice;
    int initial;
    int i, j;

    while(1)
    {
        fputs("choice(1 or 2): ", stdout);
        scanf("%d", &choice);
        if(choice != 1 && choice != 2)
        {
            fputs("범위 초과\n", stdout);
            continue;
        }
        break;
    }

    initial = (choice==1)? 3:2;

    for(i=initial; i<=9; i+=2)
    {
        printf("## %d단\n", i);
        for(j=1; j<=9; j++)
            printf("%d x %d = %d\n", i, j, i*j);
    }

    return 0;
}
