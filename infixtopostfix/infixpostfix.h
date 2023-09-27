#ifndef INFIXPOSTFIX_H
#define INFIXPOSTFIX_H


//creation
char stack[100];
int top = -1;

int priority(char x);
void push(char x);
char pop();

#endif