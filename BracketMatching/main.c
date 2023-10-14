// main.c

#include <stdio.h>
#include "bracmat.h"

int main() {
    const char *expression1 = "((a+b)*(c-d))";
    const char *expression2 = "[(a+b)]*(c-d))";

    if (isBracketMatching(expression1)) {
        printf("Expression 1 is bracket matching.\n");
    } else {
        printf("Expression 1 is not bracket matching.\n");
    }

    if (isBracketMatching(expression2)) {
        printf("Expression 2 is bracket matching.\n");
    } else {
        printf("Expression 2 is not bracket matching.\n");
    }

    return 0;
}
