#include <stdio.h>

int main()
{
    int arr[5] = {12, 23, 34, 45, 56};

    int *ptr1 = arr;
    int *ptr2 = arr + 4;

    printf("add=%d\n" , *ptr1 + *ptr2);
    printf("sub=%d\n" , *ptr1 - *ptr2);
    printf("mult=%d\n" , *ptr1 * *ptr2);
    printf("div=%d\n" , *ptr2 / *ptr1);


    return 0;
}