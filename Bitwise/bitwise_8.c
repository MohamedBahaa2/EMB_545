#include<stdio.h>

void binout(char n){
    for (int i= 7;i>=0;i--) {
        if (n &(1<<i) )
            printf("1");
        else
            printf("0");
    }
}




char reverse(char num){
    int j = 7;
    char bit_l;
    char bit_r;
    for (int i = 0; i<4;i++){
        
        bit_r = (num>>i) & 0x01;
        bit_l = (num>>j) & 0x01;

        bit_r = bit_r ^ bit_l;
        bit_l = bit_r ^ bit_l;
        bit_r = bit_r ^ bit_l;
        
        if (bit_r){
            num = num | (1<<i);
        }else{
            num = num & ~(1<<i);
        }

        if (bit_l){
            num = num | (1<<j);
        }else{
            num = num & ~(1<<j);
        }

        j--;
    }
   
    return num;
}


int main(){


    char small = 135;

    printf("\nthe number before the swap:\n\t");
    binout(small);
    printf("\nthe number after the swap:\n\t");
    binout(reverse(small));


    return 0;
}