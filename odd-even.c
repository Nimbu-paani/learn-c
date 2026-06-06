#include <stdio.h>

int main()
{
    int arr[20], size;
    int i;
    int j = 0;
    int k = 0;

    printf("How many number you have: ");
    scanf("%d", &size);

    if (size > 20)
    {
        printf("Maximum 20 numbers are supported\n");
        return 1;
    }

    printf("Enter all %d numbers:", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            j = arr[i] + j;
        }

        if (arr[i] % 2 != 0)
        {
            k = arr[i] + k;
        }
    }
    printf("Sum of all even numbers are: %d\n", j);

    printf("Sum of all odd numbers are: %d\n", k);

    return 0;
}