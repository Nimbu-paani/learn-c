#include <stdio.h>
enum day
{
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday,
    sunday
};

void printday(enum day day)
{
    switch (day)
    {
    case monday:
        printf("monday\n");
        break;

    case tuesday:
        printf("tuesday\n");
        break;

    case wednesday:
        printf("wednesday\n");
        break;

    case thrusday:
        printf("thrusday\n");
        break;

    case friday:
        printf("friday\n");
        break;

    case saturday:
        printf("saturday\n");
        break;

    case sunday:
        printf("sunday\n");
        break;

    default:
        printf("invalid\n");
        break;
    }
}

int main()
{
    enum day today = friday;

    printday(today);

    return 0;
}