#include <stdio.h>

int main(){
    
    float si,p,t,r;

    printf("enter P:\n");
    scanf("%f" , &p);

    printf("enter t\n" , t);
    scanf("%f" , &t);

    printf("enter r\n" , t);
    scanf("%f" , &r);

    si=(p*t*r)/100;

    printf("SI=%f\n", si);


    return 0;
}