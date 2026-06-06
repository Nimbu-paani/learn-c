#include <stdio.h>

typedef int i;
typedef char c;
typedef float f;

int main()
{
    i a = 10;
    c b = 'a';
    f c = 20.5;

    printf("%d\n%c\n%f\n", a, b, c);
    return 0;
}