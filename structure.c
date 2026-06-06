#include <stdio.h>

int main()
{
    struct student
    {
        int roll;
        char name[20];
        float marks;
    };

    struct student s1 = {10, "john", 90.5};

    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);
    printf("%f\n", s1.marks);
    return 0;
}