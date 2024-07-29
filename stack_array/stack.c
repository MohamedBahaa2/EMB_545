#include<stdlib.h>
#include <stdio.h>
#include"stack.h"



Stack* create_stack(unsigned int capacity){
    Stack* newStack = (Stack*)malloc(sizeof(Stack));
    
    newStack -> top = -1;
    newStack -> capacity = capacity;
    newStack -> array = (int*)malloc((newStack->capacity)*sizeof(int));

    return newStack;
}


void push(int data,Stack* stk){
    if (isFull(stk)){
        printf("\nThe stack specified is already full!");
    }
    stk -> array[++stk -> top] = data;
}


int pop(Stack* stk){
   
    if (isEmpty(stk)){
        printf("\nThe stack specified is already empty!");
        exit(-1);
    }

    int popped = stk->array[stk->top--];    
    
    return popped;
}

unsigned char isEmpty(Stack* stk){
    return (stk->top == -1);
}

unsigned char isFull(Stack* stk){
   return stk -> top == stk ->capacity-1;
}


void display(Stack* stk){
    for(int i=0;i <= stk->top;i++){
        printf("\nElement %d of the stack is %d",i,stk->array[i]);
    }
}
