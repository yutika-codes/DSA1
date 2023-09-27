#ifndef BRACMAT_H
#define BRACMAT_H
#define bool int
#define false 0
#define true 1
#define MAX 100
#define stdlib

struct Stack { 
    int top; 
    int maxSize; 
    char* array; 
}; 

struct Stack* create(char max) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->maxSize = max; 
    stack->top = -1; 
    stack->array = (char*)malloc(stack->maxSize * sizeof(char));
    // here above memory for array is being created
    // size would be 10*4 = 40
    return stack; 
}
int isFull(struct Stack* stack);
int isEmpty(struct Stack* stack);
void push(struct Stack* stack, char item);
void pop(struct Stack* stack);
int peek(struct Stack* stack);
bool checkPair(char val1, char val2);
bool checkBalanced(struct Stack* stack,char expr[], int len);
int INT_MIN;

#endif