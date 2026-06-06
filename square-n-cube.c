#include <stdio.h>

int square(int a)
{
    printf("square of %d is %d\n" , a , a*a);
}

int cube(int b)
{
    printf("cube of %d is %d\n" , b , b*b*b);
}

int main()
{
    int num;
    printf("enter number:\n");
    scanf("%d" , &num);

    square(num);
    cube(num);
}