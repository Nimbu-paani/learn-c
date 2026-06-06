#include <stdio.h>
extern int a = 50;

int display()
{
    a++;
    printf("%d\n", a);
}

int show()
{
    a--;
    printf("%d\n", a);
}

int main()
{
    printf("%d\n", a);
    display();
    show();
    return 0;
}
