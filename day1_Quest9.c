#include<stdio.h>

int main(){
    int marks;
        printf("Enter the marks: ");
        scanf("%d", &marks);
        
    if(marks >= 35)
        printf("passed! ");
    else
        printf("fail ? ");
    return 0;
     
}