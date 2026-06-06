#include <stdio.h>
#include <string.h>

int main()
{
    union student
    {
        int roll;
        char name[20];
        float marks;
    };

    union student u;
    u.roll = 10;
    printf("%d\n", u.roll);

    strcpy(u.name, "Rajan");
    printf("%s\n", u.name);

    u.marks = 90.5;
    printf("%f\n", u.marks);
    return 0;
}