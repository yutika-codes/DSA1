#include "stack.h"
#include <stdio.h>

int main() {
    struct Stack stack;
    initialize(&stack);

    // Push some elements onto the stack
    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    return 0;
}
