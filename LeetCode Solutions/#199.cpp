// #199.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
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
    std::vector<int> rightSideView(TreeNode* root) {
        std::vector<int> result;
        if (root == nullptr) return result;

        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            int lastValue;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* current = q.front();
                q.pop();

                // Record the last node value encountered at each level
                lastValue = current->val;

                if (current->left != nullptr) q.push(current->left);
                if (current->right != nullptr) q.push(current->right);
            }

            result.push_back(lastValue);
        }

        return result;
    }
};

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    Solution sol;

    std::vector<int> visibleNodes = sol.rightSideView(root);
    std::cout << "Nodes visible from the right side (ordered from top to bottom): ";
    for (int val : visibleNodes) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
