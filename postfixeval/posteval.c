#include "stack.h"
#include "posteval.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int evaluatePostfix(char* exp) {
    // Create a stack of capacity equal to expression size
    struct Stack* stack = createStack(strlen(exp));
    int i;

    // See if the stack was created successfully
    if (!stack)
        return -1;

    // Scan all characters one by one
    for (i = 0; exp[i]; ++i) {

        // If the scanned character is an operand
        // (number here), push it to the stack.
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');

        // If the scanned character is an operator,
        // pop two elements from the stack and apply the operator
        else {
            int val1 = pop(stack);
            int val2 = pop(stack);switch (exp[i]) {
                case '+':
                    push(stack, val2 + val1);
                    break;
                case '-':
                    push(stack, val2 - val1);
                    break;
                case '*':
                    push(stack, val2 * val1);
                    break;
                case '/':
                    push(stack, val2 / val1);
                    break;
            }
        }
    }
    return pop(stack);
}