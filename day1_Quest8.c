#include<stdio.h>

int main(){
    int ch;
    printf("enter any cheracter:");
    scanf("%d", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z'))
        printf("Alphabet");
    else if(ch >= '0' && ch <= '9')
        printf("digit");
    else
        printf("special cheracter.");
    return 0;

    
}