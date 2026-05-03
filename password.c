#include<stdio.h>

int main()
{
    int a;

    printf("Enter your passcode:");
    scanf("%d" , &a);

    if (a==7598)
    {
        printf("Welcome Rajan\n");
        return 0;
    }
    else
    {
        printf("wrong password\n");
        return 67;
    }
    
}