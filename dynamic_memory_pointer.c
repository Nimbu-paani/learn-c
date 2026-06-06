#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr = 10;

    printf("value=%d\n" , *ptr);
    free(ptr);
    return 0;
}