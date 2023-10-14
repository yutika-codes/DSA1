#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


// Insert on the left of the node
struct TreeNode* insertLeft(struct TreeNode* root, int value) {
  root->left = createNode(value);
  return root->left;
}
