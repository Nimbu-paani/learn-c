#include <stdio.h>

int len(char *str)
{
    int len=0;
    while (*str > '\0')
    {
        len++;
        str++;
    }
    return len;
    
}


int main()
{
    char str[]="hello world";
    printf("length of string =%d \n" , len(str));      
    return 0;
}