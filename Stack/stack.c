#include "stack.h"
#include <stdio.h>

void initialize(struct Stack *stack) {
    stack->top = -1;
}

void push(struct Stack *stack, int item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push %d\n", item);
    } else {
        stack->items[++stack->top] = item;
        printf("%d pushed to the stack\n", item);
    }
}