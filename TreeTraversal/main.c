#include <stdio.h>
#include "tree.h"
#include "traversal.h"

int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(7);

    printf("Pre-order traversal: ");
    preOrderTraversal(root);

    return 0;
}
