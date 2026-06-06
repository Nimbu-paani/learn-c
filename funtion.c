#include<stdio.h>

int square(int a)
{
    printf("area of square is= %d \n" , a*a);

}

int rect(int l, int b)
{
    printf("area of rectangle is= %d \n" , l*b);
}

int main()
{
    int p,q,r;
    printf("enter side of square: ");
    scanf("%d" , &p);

    printf("enter L and B of rectangle: ");
    scanf("%d %d", &q , &r);

    square(p);
    rect(q,r);
    return 0;

}
