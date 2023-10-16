#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include "posteval.h"

int main() {
    char exp[] = "3 10 5+*";

    // Function call
    printf("Postfix evaluation: %d", evaluatePostfix(exp));
    return 0;
}