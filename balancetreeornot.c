#include <stdio.h>
#include <stdlib.h>

// Node structure for binary tree
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new node
TreeNode *newNode(int data) {
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to get the height of a binary tree
int height(TreeNode *root) {
    if (root == NULL)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Function to check if a binary tree is balanced
int isBalanced(TreeNode *root) {
    if (root == NULL)
        return 1;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    return 0;
}

// Main function
int main() {
    // Creating a sample binary tree
    TreeNode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);

    // Check if the binary tree is balanced
    if (isBalanced(root))
        printf("The binary tree is balanced.\n");
    else
        printf("The binary tree is not balanced.\n");

    return 0;
}
