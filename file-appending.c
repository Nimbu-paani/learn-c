#include <stdio.h>

int main(){
    FILE *file;
    file=fopen("example.txt" , "a");
    if (file==NULL)
    {
        printf("error");
        return 1;
    }
    fprintf(file, " Test line");

    fclose(file);
    
    return 0;
}