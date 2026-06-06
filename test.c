// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.



#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("enter all three marks: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (a + b + c) / 3;

    if (a >= 33 && b >= 33 && c >= 33 && d >= 40)

        printf("pass\n");
    else
        printf("fail\n");

    return 0;
}