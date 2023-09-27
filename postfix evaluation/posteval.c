#include "posteval.h"

int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}