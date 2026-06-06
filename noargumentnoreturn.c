#include <stdio.h>
int Square()
{
    int side;
    printf("Enter your side:");
    scanf("%d", &side);
    printf("Area of square=%d\n", side * side);
    printf("Perimeter of square=%d\n", 4 * side);
}
int Rectangle()
{
    int length, breadth;
    printf("Enter your length:\n");
    scanf("%d", &length);
    printf("Enter your breadth:\n");
    scanf("%d", &breadth);
    printf("Area of rectangle=%d\n", length * breadth);
    printf("Perimeter of rectangle=%d\n", 2 * (length + breadth));
}
int main()
{
    Square();
    Rectangle();
    return 0;
}