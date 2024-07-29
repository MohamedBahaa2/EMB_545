#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(){
    Stack* stk = create_stack(100);

    push(10,stk);
    push(20,stk);
    push(30,stk);

    display(stk);

    pop(stk);

    display(stk);

}


