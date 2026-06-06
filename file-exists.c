#include <stdio.h>

int main(){
    FILE *file;
    file=fopen("source.txt" , "r");

    if (file == NULL)
    {
        printf("file doesnt exists");
    }
    else
    {
        printf("file exists");
        fclose(file);
    }
    
    return 0;
}