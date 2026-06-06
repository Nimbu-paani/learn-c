#include <stdio.h>

float add()
{
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("the sum of %f and %f is: %f\n", a, b, a + b);
}

float sub()
{
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("the difference between %f and %f is: %f\n", a, b, a - b);
}

float mult()
{
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("the product of %f and %f is: %f\n", a, b, a * b);
}

float div()
{
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("the division of %f and %f is: %f\n", a, b, a / b);
}

int main()
{
    
    int calc;

    printf(" 1.Addition\n 2.subtraction\n 3.Multiplication\n 4.Division\nEnter your Choice:");
    scanf("%d", &calc);

    switch (calc)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mult();
        break;
    case 4:
        div();
        break;

    default:
        printf("invalid option\n");
        break;
    }

    return 0;
}