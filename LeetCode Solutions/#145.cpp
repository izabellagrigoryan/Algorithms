// #145.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};

class Solution {
public:
    std::vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> result;
        std::stack<TreeNode*> nodeStack;

        if (root == nullptr)
            return result;

        nodeStack.push(root);

        while (!nodeStack.empty()) {
            TreeNode* node = nodeStack.top();
            nodeStack.pop();
            result.insert(result.begin(), node->val); // Insert at beginning to reverse the order
            if (node->left)
                nodeStack.push(node->left);
            if (node->right)
                nodeStack.push(node->right);
        }

        return result;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
