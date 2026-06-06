#include <stdio.h>

int main(){
   
    float s,u,t,a;

    printf("enter U:\n");
    scanf("%f" , &u);

    printf("enter T:\n");
    scanf("%f" , &t);

    printf("enter A:\n");
    scanf("%f" , &a);

    s=(u*t)+(0.5*(a*(t*t)));

    printf("S=%f\n" , s);


    return 0;
}