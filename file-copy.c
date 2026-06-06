#include <stdio.h>

int main(){
    FILE *source , *dest;
    char c;
    source=fopen("source.txt" , "r");
    dest=fopen("dest.txt" , "w");
    if (source==NULL||dest==NULL)
    {
        printf("error");
        return 1;
    }
    while ((c=fgetc(source))!=EOF)
    {
        fputc(c , dest);
    }
    fclose(source);
    fclose(dest);
    
    return 0;
}