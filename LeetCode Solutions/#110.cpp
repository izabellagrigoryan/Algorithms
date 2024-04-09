// #110.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <cstdlib> // for NULL
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

pair<bool, int> isBalancedHelper(TreeNode* root) {
    if (root == NULL)
        return make_pair(true, 0);

    pair<bool, int> leftResult = isBalancedHelper(root->left);
    pair<bool, int> rightResult = isBalancedHelper(root->right);

    int height = max(leftResult.second, rightResult.second) + 1;
    bool balanced = leftResult.first && rightResult.first && abs(leftResult.second - rightResult.second) <= 1;

    return make_pair(balanced, height);
}

bool isBalanced(TreeNode* root) {
    return isBalancedHelper(root).first;
}

// Utility function to create a new TreeNode
TreeNode* newNode(int val) {
    TreeNode* node = new TreeNode(val);
    return node;
}

int main() {
    // Example 1
    TreeNode* root1 = newNode(3);
    root1->left = newNode(9);
    root1->right = newNode(20);
    root1->right->left = newNode(15);
    root1->right->right = newNode(7);
    root1->right->right->left = newNode(5);
    root1->right->right->right = newNode(17);

    cout << "Example 1: " << (isBalanced(root1) ? "true" : "false") << endl;

    return 0;
}
