#include <stdio.h>

enum color
{
    RED=2,
    GREEN,
    BLUE
};

int main()
{
    enum color c = GREEN;
    printf("%d\n", c);

    return 0;
}