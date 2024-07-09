#include<stdio.h>

int compare(int num1, int num2){
    
    if (num1 > num2){
        
        return num1;

    }else if (num1 == num2){
        
        printf("The numbers are equal\n");
        return num1;

    }else{
        return num2;
    }

}


int main(){
    int x,y;
    
    printf("plese enter the numbers to compare: ");
    scanf("%d %d",&x,& y);
    
    printf("%d",compare(x,y));
    
    return 0;
} 