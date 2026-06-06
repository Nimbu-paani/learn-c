#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 50;

    if (a > b)
    {
        if (a > c)
        {
            printf("first =%d\n", a);
        }
        else
        {
            printf("third =%d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("second =%d\n", b);
        }
        else
        {
            printf("third =%d\n", c);
        }
    }

    return 0;
}