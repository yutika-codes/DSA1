#ifndef INFIXTOPOSTFIX_H
#define INFIXTOPOSTFIX_H

#define STACK_SIZE 100

int isOperator(char c);
int precedence(char op);
char* infixToPostfix(char* infix);

#endif
