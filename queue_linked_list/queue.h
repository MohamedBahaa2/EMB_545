
typedef struct node Node;
typedef struct queue Queue;

struct queue{
    Node* head;
    Node* bottom;
    unsigned int size; 
};

struct node{
    int data;
    Node* next;
};

Queue* create_queue(int);
void push(int ,Queue*);
int pop(Queue*);
unsigned char isEmpty(Queue*);
void display(Queue*);