#include <stdio.h>
#include "infixpostfix.h"

int main() {
    char infix[100];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    char* postfix = infixToPostfix(infix);

    printf("Infix: %s\n", infix);
    printf("Postfix: %s\n", postfix);

    free(postfix); // Remember to free the allocated memory.

    return 0;
}
