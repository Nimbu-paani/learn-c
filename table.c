#include<stdio.h>

void table()
{
    int i, num;
    printf("enter a number:");
    scanf("%d" , &num);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
}

int main()
{
    table();
    return 0;
}
