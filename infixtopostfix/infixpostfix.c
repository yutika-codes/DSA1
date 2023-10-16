#include <stdio.h>
#include <stdlib.h>
#include "infixpostfix.h"

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

char* infixToPostfix(char* infix) {
    char stack[STACK_SIZE];
    int top = -1;
    char* postfix = (char*)malloc(2 * strlen(infix) * sizeof(char)); // Twice the length for safety.
    int i, j;

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i]))
            postfix[j++] = infix[i];
        else if (infix[i] == '(')
            stack[++top] = infix[i];
        else if (infix[i] == ')') {
            while (top >= 0 && stack[top] != '(')
                postfix[j++] = stack[top--];
            if (top >= 0 && stack[top] == '(')
                top--;
        } else {
            while (top >= 0 && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = stack[top--];
            stack[++top] = infix[i];
        }
    }

    while (top >= 0)
        postfix[j++] = stack[top--];

    postfix[j] = '\0';
    return postfix;
}
