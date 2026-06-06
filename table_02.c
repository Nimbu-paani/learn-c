#include <stdio.h>
int number()
{
    int a;

    printf("enter a number:");
    scanf("%d", &a);
    return a;
}
int main()
{

    int i;
    int num = number();

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
