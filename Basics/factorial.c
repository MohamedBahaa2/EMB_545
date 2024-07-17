#include<stdio.h>

int factorial(int x){
    if (x <= 1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}


int main(){
    int num;
    
    printf("please enter a number: ");
    scanf("%d",&num);

    printf("\n the factorial of %d is %d",num, factorial(num));
    

    return 0;
}
