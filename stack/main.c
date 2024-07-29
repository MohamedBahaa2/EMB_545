#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(){
    Stack* stk = create_stack();

    push(stk,10);
    push(stk,20);
    push(stk,30);

    display(stk);

    pop(stk);

    display(stk);

}


