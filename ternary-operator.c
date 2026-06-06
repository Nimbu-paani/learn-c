#include <stdio.h>

int main()
{
    int a,b,max;
    a=50 , b=40;

    max=(a>b ? a :b);                  // if a>b then max = a, else max = b
    
    printf("largest = %d\n" , max);

    return 0;
}