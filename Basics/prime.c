#include<stdio.h>


int main(){
    int x;
    printf("please enter a number: ");
    scanf("%d",& x);

    for (int i = 2; i< x;i++){
        if ((x%i) == 0){
            printf("\nNot Prime!");
            return 0;
        }
    }

    printf("\nPrime!");
    
    return 0;
}