#include<stdio.h>

int main(){
    unsigned char x;
    printf("please enter a number: ");
    scanf("%hhu",&x);

    x= (x >> 4) & 0x01 ;
    
    printf("%hhu",x);


    return 0;
}
