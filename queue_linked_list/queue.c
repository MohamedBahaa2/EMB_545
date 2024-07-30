#include "queue.h"
#include <stdlib.h>

Queue *create_queue(int size){
   
    Queue* newQueue = (Queue*)malloc(sizeof(Queue));
    
    newQueue -> head = NULL;
    newQueue -> bottom = NULL;
    newQueue -> size = size;

    return newQueue;
}

void push(int data,Queue* q){
    
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    if (isEmpty(q)){
        q -> head = newNode;
    }else{
        q -> bottom -> next = newNode;
        q -> bottom = newNode;
    }
    
    newNode -> data = data;
    newNode -> next = NULL;


    
}
int pop(Queue* q){
    
    if (isEmpty){
        printf("\nThe queue specified is already empty!");
        return -1;
    }

    int popped = q -> head -> data;
    q->head = q-> head -> next;

    return popped;
}


unsigned char isEmpty(Queue* q){
    return (q->bottom == q->head);
}

void display(Queue* q){
    Node* temp = q->head;

    for(int i = 0; i< q->size;i++){
        printf("\nelement %d is %d",i,temp->data);
        temp = temp->next;
    }
   
    temp = NULL;
}

