#include <stdio.h>

int main()
{

    int i;
    long int k = 1;

    printf("enter a number:\n");
    scanf("%d", &i);

    while (i > 1)
    {
        k = i * k;
        i--;
    }
    printf("factorial = %ld\n", k);

    return 0;
}