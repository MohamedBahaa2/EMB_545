#include<stdio.h>

void reverse(unsigned int *ptr){
    //using pointers
    char *byte = (char*)ptr;
    
    for(int i = 0;i < 2;i++){
        *(byte+i) = *(byte+i) ^ *(byte+3-i);
        *(byte+3-i) = *(byte+i) ^ *(byte+3-i);
        *(byte+i) = *(byte+i) ^ *(byte+3-i);
    }
    // using anothers variable
   /* unsigned int reversed_num = 0;
    reversed_num |= (*ptr&(0x000000FF)) << 24; // get all bits of the first byte, and move the to the last position
    reversed_num |= (*ptr&(0x0000FF00)) << 8; // same for second , move to 3rd
    reversed_num |= (*ptr&(0x00FF0000)) >> 8; // same for 3rd, move to 2nd
    reversed_num |= (*ptr&(0xFF000000)) >> 24; // same for 4th, move to 1st 
    *ptr = reversed_num;
    */
}
int main(){
//not solved yet

    unsigned int x = 0x12345678;
    reverse(&x);

    printf("%x",x);
   




    return 0;
}
