#include<stdio.h>

int display()
{
    static int x = 0;
    x++;
    printf("%d \n" , x);
}

int main()
{
    display();
    display();
    return 0;
}