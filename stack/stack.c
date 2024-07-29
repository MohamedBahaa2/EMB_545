#include<stdlib.h>
#include "stack.h"
#include <stdio.h>
/*
typedef struct stack Stack;

struct stack{
    int size;
    Element *arr [];
};

typedef struct element Element;

struct element{
    int index;
    int data;
    Element* next;
};


Element* push(int data, Stack *s){
    
    Element* newElement = (Element*)malloc(sizeof(Element));
    
    if (newElement != NULL){
        newElement -> data = data;
    
        if (s -> size == 0){
            newElement -> index = s -> size;
            (s -> size)++;
            newElement -> next = NULL;
        }
        else{
            (s -> size)++;
            newElement -> index = s -> size;
            }
            
    }

    return newElement;


}

typedef struct stack Stack;
*/

void create_stack(Stack* newStack){
    newStack -> top = NULL;
    newStack -> size = 0;
}

void push(Stack* stk, int data){

    Node* newNode =(Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = stk->top;
    stk -> top = newNode;
    stk -> size += 1;

}


int pop(Stack* stk){
    
    if (isEmpty(stk)){
        printf("stack is empty");
        exit(-1);
    }

    Node* temp = stk -> top;
    int data = temp -> data;
    stk -> top = stk -> top ->next;
    stk ->size -= 1;

    free(temp);
    return data;

}

unsigned char isEmpty(Stack* stk){
    if (stk -> top == NULL){
        return 1;
    }else return 0;
}

unsigned char isFull(Stack* stk,int n){
    if (stk -> size == MAX_SIZE){
        return 1;
    }else return 0;
}


void display(Stack* stk){
    if(isEmpty(stk)){

        printf("the stack is empty");
        exit(-1);
    }
    Node* temp = stk -> top;
    printf("\n");
    for(int i = 0; i < stk->size; i++){
        
        printf("\nelement %d of the stack is%d",i,temp->data);
        temp = temp ->next;
    }
}

