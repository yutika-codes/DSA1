// binary_tree.h
#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int data);
Node* insertNode(Node* root, int data);
Node* deleteNode(Node* root, int data);
void inOrderTraversal(Node* root);
void freeTree(Node* root);

#endif
