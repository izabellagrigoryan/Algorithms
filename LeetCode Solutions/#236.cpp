// #236.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // Base case: if root is null or if root is one of the given nodes, return root
    if (root == nullptr || root == p || root == q) {
        return root;
    }

    // Recursively search left and right subtrees for the LCA
    TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
    TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

    // If both leftLCA and rightLCA are non-null, then root is the LCA
    if (leftLCA != nullptr && rightLCA != nullptr) {
        return root;
    }

    // Otherwise, return the non-null node among leftLCA and rightLCA
    return (leftLCA != nullptr) ? leftLCA : rightLCA;
}

int main() {
    // Constructing a sample binary tree
    //       3
    //      / \
    //     5   1
    //    / \ / \
    //   6  2 0  8
    //     / \
    //    7   4
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode* p = root->left->right->left;
    TreeNode* q = root->right->left;

    TreeNode* lca = lowestCommonAncestor(root, p, q);
    cout << "Lowest Common Ancestor of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right->left;
    delete root->left->right->right;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}