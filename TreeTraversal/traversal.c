#include <stdio.h>
#include "traversal.h"

void preOrderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        printf("%d ", root->data); // Process the current node
        preOrderTraversal(root->left); // Recursively traverse the left subtree
        preOrderTraversal(root->right); // Recursively traverse the right subtree
    }
}

// postorderTraversal traversal
void postorderTraversal(struct TreeNode* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->data);
}