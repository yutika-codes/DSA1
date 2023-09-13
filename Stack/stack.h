#ifndef STACK_H
#define STACK_H

#define MAX 20

int count = 0;

// Creating a stack
struct stack {
  int num[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s);
int isempty(st *s);
void push(st *s, int newitem);


#endif