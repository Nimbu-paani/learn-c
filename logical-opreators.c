#include<stdio.h>
int main()
{
    int num1 , num2;
    int and , or , not;
    printf("enter the first number = ");
    scanf("%d" , &num1);
    printf("enter the second number = ");
    scanf("%d" , &num2);
    
    and = (num1<num2) && (num1>num2);         // (&&) AND opreator (TRUE if both  operants are true)
    printf("and opreator = %d \n" , and);
    
    or = (num1<num2) || (num1>num2);          // (||) OR opreator (TRUE if atleast one opreant is true)
    printf("or opreator = %d \n" , or);
    
    not = !(num1==num2);                      // (!) NOT opreator (reverse the logical state) 
    printf("not opreator = %d \n" , not);
    
    return 0;
}