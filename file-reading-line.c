#include <stdio.h>

int main()
{
    FILE *file;
    char line[100];
    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("error");
        return 1;
    }
    fgets(line, sizeof(line), file);
    printf("%s", line);
    fclose(file);

    return 0;
}