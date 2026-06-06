#include <stdio.h>

int main()
{
    int arr[] = {34, 76, 89, 56, 45};
    int search, i, found = 0;
    
    printf("enter searching element=");
    scanf("%d", &search);
    
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            break;
        }
        
    }

    if (found == 1)
        {
            printf("element found\n");
        }
        else
        {
            printf("Not found\n");
        }

    return 0;
}