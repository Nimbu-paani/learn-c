#include <stdio.h>

int main()
{

    int i;
    int k = 1;

    printf("enter a number:");
    scanf("%d", &i);

    for (i; i; i--)
    {
        k = i * k;
    }
    printf("factorial = %d\n", k);

    return 0;
}
