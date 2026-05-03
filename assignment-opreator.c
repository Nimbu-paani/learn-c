#include<stdio.h>
int main ()
{
    int a = 10, b = 5;
    int c;

    c = a + b;                             // addition
    printf("%d \n" , c);

    c+=a;                                  // c = c+a
    printf("%d \n" , c);

    c-=b;                                  // c = c-b
    printf("%d \n" , c);

    c*=a;                                  // c = c*a
    printf("%d \n" , c);

    c/=b;                                  // c = c/b
    printf("%d \n" , c);

    return 0;
}