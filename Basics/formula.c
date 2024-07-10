//1. Write a program that take two integers from the user and print the results of this equation as float: Result = ((num1 + num2) * 3) /2– 10.
#include<stdio.h>

int main(){
    printf("please enter the two numbers:");
    
    int x,y;
    scanf("%d %d",&x ,&y);

    // [((x + y) * 3) /2]– 10
    float result = ((float)((x + y) * 3) /2 )- 10; 
    
    printf("\nResult = %.2f",result);





}