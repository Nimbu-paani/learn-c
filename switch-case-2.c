#include <stdio.h>

int main()
{
    int menu;

    printf("menu driven programm\n");
    printf("1.Coffee\n2.Tea\n3.Momo\n4.Pizza\n5.Burger\n6.Chowmein\n7.pasta\n8.Icecream\n9.Cold drink\n10.Snacks\n");
    printf("enter your choice:");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("your Coffee has been ordered\n");
        break;
    case 2:
        printf("your Tea has been ordered\n");
        break;
    case 3:
        printf("your Momo has been ordered\n");
        break;
    case 4:
        printf("your Pizza has been ordered\n");
        break;
    case 5:
        printf("your Burger has been ordered\n");
        break;
    case 6:
        printf("your Chowmin has been ordered\n");
        break;
    case 7:
        printf("your pasta has been ordered\n");
        break;
    case 8:
        printf("your Icecream has been ordered\n");
        break;
    case 9:
        printf("your Cold drink has been ordered\n");
        break;
    case 10:
        printf("your snacks has been ordered\n");
        break;
    default:
        printf("invalid option\n");
        break;
    }

    return 0;
}