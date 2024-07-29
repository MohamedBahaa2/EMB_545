#ifndef _STACK_H_
#define _STACK_H_
#define MAX_SIZE 100

    typedef struct node Node;
    typedef struct stack Stack;

    struct node{
        int data;
        Node* next;
    };

    struct stack{
        Node* top;
        int size;
    };



    //prototypes
    Stack* create_stack(); //creates stack

    void push(Stack* ,int); //adds elem at index 0

    int pop(Stack*); // removes first elem

    unsigned char isEmpty(Stack*); // returns 1 if empty
    
    unsigned char isFull(Stack*,int); // returns 1 if full

    void display(Stack*); // prints all stack elements


#endif






