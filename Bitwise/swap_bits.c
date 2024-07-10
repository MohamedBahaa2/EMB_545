/*
    Solution steps:
        1- get the bits #2 and #6
        2- set their positions to 1
        3- use AND operator between bit #2 and position of bit 6
        4- ------------------------ bit #6 and position of bit 2 


*/


#include<stdio.h>

int main(){

    unsigned char x, b2, b6;
    printf("please enter a number: ");
    scanf("%hhu",&x);

    b2 = (x >> 2) & 0x01; //get bit 2
    b6 = (x >> 6) & 0x01; //get bit 6
    
    x |= 0x22; // set their positions to 1

    x &= b2 << 6; //put bit 2 in position 6
    x &= b6 <<2; //put bit 6 in position 2

    printf("%hhu",x);


    return 0;
}