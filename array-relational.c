#include <stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr1 = arr + 1;
    int *ptr2 = arr+3;

    if (ptr1 < ptr2)
    {
        printf("ptr1 is less than ptr2\n");
    }
    else if (ptr1 < ptr2)
    {
        printf("ptr1 is less than ptr2\n");
    }
    else
    printf("ptr1 is equal to ptr 2\n");
    
    return 0;
}