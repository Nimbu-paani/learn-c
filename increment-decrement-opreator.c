#include<stdio.h>
int main()
{
    int a = 10;
    int b,c,d,e;

    printf("%d \n" , a);
    b = a++ ;                          //a will be a+1 after termination (;)
    printf("%d \n" , b);
    printf("%d \n" , a);

    c = ++a ;                          //a will be a+1 before termination (;)
    printf("%d \n" , c);
    printf("%d \n" , a);

    d = --a ;                          //a will be a-1 after termination (;)
    printf("%d \n" , d);
    printf("%d \n" , a);

    e = a-- ;                          //a will be a-1 before termination (;)
    printf("%d \n" , e);
    printf("%d \n" , a);    

    return 0;
}