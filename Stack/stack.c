#include "stack.h"

void createEmptyStack(st *s) {
  s->top = -1;
}

int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}


void push(st *s, int newnum) {
  if (isfull(s)) {
    printf("STACK FULL");
  } else {
    s->top++;
    s->num[s->top] = newnum;
  }
  count++;
}