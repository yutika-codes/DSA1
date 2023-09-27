#include "bracmat.h"



int main() {
  char exp[MAX] = "({})[]";

  int len = strlen(exp);
  struct Stack* stack = create(len); 
  checkBalanced(stack, exp, len)?printf("Balanced"): printf("Not Balanced"); 

  return 0;
}
