typedef struct stack Stack;

struct stack{
    int top;
    unsigned int capacity;
    int *array;
};

Stack* create_stack(unsigned int);

void push(int,Stack*);

int pop(Stack*);

unsigned char isEmpty(Stack*);
unsigned char isFull(Stack*);

void display(Stack*);

