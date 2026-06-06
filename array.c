// WAP to print maximum number from array
#include <stdio.h>

int main()
{
    int arr[20], i, size, max;

    printf("Enter size of array=");
    scanf("%d", &size);

    printf("Enter array elements=");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum value = %d\n", max);

    return 0;
}