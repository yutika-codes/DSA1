// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>
#include "traversal.h"

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 12);
  insertRight(root, 9);

  insertLeft(root->left, 5);
  insertRight(root->left, 6);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);
}