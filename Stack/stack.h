#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 20

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack);
void push(struct Stack *stack, int item);

#endif