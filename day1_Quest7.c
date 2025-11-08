#include<stdio.h>

int main(){
    int n;
       printf( "enter number:");
       scanf("%d", &n);

   if(n % 5 == 0 && n % 2 == 0)
       printf("divisibal by 5 and 2.");
   else
       printf("not divisibal by both.");
    return 0;
}