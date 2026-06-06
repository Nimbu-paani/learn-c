#include <stdio.h>

int main()
{
    FILE *file;
    char c;
    file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("error\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }
    fclose(file);

    return 0;
}