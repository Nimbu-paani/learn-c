#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr1 = arr + 4;
    int *ptr2 = arr + 3;

    printf("%d\n", *ptr1 >> 2);
    printf("%d\n", *ptr2 << 3);

    return 0;
}