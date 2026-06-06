#include <stdio.h>

void add(float a,float b)
{
    printf("the sum of %f and %f is: %f\n", a, b, a + b);
}

void sub(float a,float b)
{
    printf("the difference between %f and %f is: %f\n", a, b, a - b);
}

void mult(float a,float b)
{
    printf("the product of %f and %f is: %f\n", a, b, a * b);
}

void div(float a,float b)
{
    printf("the division of %f and %f is: %f\n", a, b, a / b);
}

int main()
{
    
    int calc; 
    float one, two;

    printf(" 1.Addition\n 2.subtraction\n 3.Multiplication\n 4.Division\nEnter your Choice:");
    scanf("%d", &calc);

    printf("enter two numbers:");
    scanf("%f %f", &one,&two);

    switch (calc)
    {
    case 1:
        add(one,two);
        break;
    case 2:
        sub(one,two);
        break;
    case 3:
        mult(one,two);
        break;
    case 4:
        div(one,two);
        break;

    default:
        printf("invalid option\n");
        break;
    }

    return 0;
}