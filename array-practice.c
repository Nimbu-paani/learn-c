#include <stdio.h>

int main(){
    int arr[20] ,j ,size , max;

    printf("how many numbers are there:\n");
    scanf("%d" ,  &size);

    printf("enter the numbers:\n");

    for ( j = 0; j < size; j++)
    {
        scanf("%d" , &arr[j]);
    }

    max = arr[0];
    
    for ( j = 0; j < size; j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    printf("largest number is: %d\n" , max);
    

    return 0;
}