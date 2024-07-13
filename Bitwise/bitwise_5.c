#include<stdio.h>

int main(){
    unsigned char x;
    printf("please enter a number: ");
    scanf("%hhu",&x);

    x |= 0x03 << 6; //setting the last two bits
    
    printf("%hhu",x);


    return 0;
} 
