// main.c
#include <stdio.h>
#include "binarytree.h"

int main() {
    Node* root = NULL;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    printf("In-order traversal of the tree: ");
    inOrderTraversal(root);
    printf("\n");

    root = deleteNode(root, 30);
    printf("In-order traversal after deleting 30: ");
    inOrderTraversal(root);
    printf("\n");

    freeTree(root);

    return 0;
}
