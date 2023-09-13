#include <stdio.h>
#include "stack.h"

int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 12);
  push(s, 15);
  
  printStack(s);


}