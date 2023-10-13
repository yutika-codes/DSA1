#ifndef TREE_H
#define TREE_H

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int data);

#endif
