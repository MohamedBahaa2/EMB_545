#include<stdio.h>

int main(){
    unsigned char x;
    printf("please enter a number: ");
    scanf("%hhu",&x);

    x &= 0x01 << 2;
    
    printf("%hhu",x);


    return 0;
} 
