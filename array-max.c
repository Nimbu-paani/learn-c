#include <stdio.h>

int main()
{
    int arr[20], size, i, max;
    printf("enter size of array:\n");
    scanf("%d", &size);
    printf("enter array element=\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("maximum number=%d\n", max);

    return 0;
}