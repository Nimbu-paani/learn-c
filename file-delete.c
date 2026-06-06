#include <stdio.h>

int main(){
    if(remove("example.txt")==0)
    {
        printf("file deleted\n");
    }
    else
    {
        printf("error");
    }
    return 0;
}