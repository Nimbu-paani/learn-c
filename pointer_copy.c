#include <stdio.h>

void copy(char *dest , char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}


int main()
{
    char src[]="hello world";
    char dest[20];
    copy(dest , src);

    printf("copied string=%s\n" , dest);
    return 0;
}