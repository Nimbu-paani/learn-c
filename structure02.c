#include <stdio.h>

int main()
{
    struct employee
    {
        int empid;
        char empname[10];
        float salary;
    };

    struct employee em = {101, "Ram", 50000.25};

    printf("empolyee id= %d\n", em.empid);
    printf("empolyee name= %s\n", em.empname);
    printf("empolyee salary= %f\n", em.salary);

    return 0;
}