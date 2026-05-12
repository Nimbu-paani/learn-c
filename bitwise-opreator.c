#include <stdio.h>
int main()
{
    int num1, num2;
    int a, b, c;

    printf("enter first number =");
    scanf("%d", &num1);
    printf("enter second number =");
    scanf("%d", &num2);

    a = num1 & num2;
    printf("%d \n", a);

    b = num1 | num2;
    printf("%d \n", b);

    c = num1 ^ num2;
    printf("%d \n", c);

    return 0;
}