#include<stdio.h>
void swap(int *a, int *b)
{
    int *temp;

    *temp = *a;
    *a = *b;
    *b = *temp;

    printf("a=%d b=%d\n" , *a,*b);

}

int main()
{
    int a, b;
    printf("enter 2 numbers:\n");
    scanf("%d %d" , &a , &b);

    printf("a=%d b=%d \n" , a , b);

    swap(&a,&b);                  //call by refrence

    return 0;
}