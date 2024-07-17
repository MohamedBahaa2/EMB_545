#include<stdio.h>

int power_of_two(int x){
    int input_value = x;
    
    if(x <= 0){
        printf("\n%d is not a power of two",x);
    }

    while(x > 1){
        if (x%2 != 0){
            printf("\n%d is not a power of two",input_value);
            return 0;
        }
        x /= 2;
    }
    
    printf("\n%d is a power of two",input_value);
    return 1;
}

int main(){
    int num;
    
    printf("please enter a number: ");
    scanf("%d",&num);

    power_of_two(num);

    return 0;
}