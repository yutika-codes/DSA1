// bracket_matching.c
#include <stdio.h>
#include "bracmat.h"

int isBracketMatching(const char *expression) {
    char stack[100]; // Assuming a maximum of 100 characters in the expression
    int top = -1;

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
            stack[++top] = expression[i];
        } else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}') {
            if (top == -1) {
                return 0; // Unmatched closing bracket
            }
            char openBracket = stack[top--];
            if ((expression[i] == ')' && openBracket != '(') ||
                (expression[i] == ']' && openBracket != '[') ||
                (expression[i] == '}' && openBracket != '{')) {
                return 0; // Mismatched brackets
            }
        }
    }

    if (top == -1) {
        return 1; // All brackets matched
    } else {
        return 0; // Unmatched opening bracket
    }
}
