#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("error");
        return 1;
    }
    fprintf(file, "first line\nnext line");
    fclose(file);
    return 0;
}