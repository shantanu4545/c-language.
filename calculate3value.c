#include<stdio.h>

int main(){
    float a,b,c,x;
    printf("enter value a,b,c:");
    scanf("%f",&a,&b,&c);

    (x=a/b)-c;
    printf("value of x:%f",x);
    return 0;
}