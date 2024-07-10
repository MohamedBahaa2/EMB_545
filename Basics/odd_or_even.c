#include<stdio.h>

int main(){

    printf("\nplease enter a number: ");
    
    unsigned char x;

    scanf("%d",&x);
    unsigned char odd = x & 0x01;
    
    odd == 1? printf("The number is odd"):printf("The number is even");

    return 0;
}