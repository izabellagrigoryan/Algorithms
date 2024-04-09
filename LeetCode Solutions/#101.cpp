// #101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {

        return isMirror(root, root);
    }

    bool isMirror(TreeNode* p, TreeNode* q) {

        if (p == nullptr && q == nullptr)
            return true;


        if (p == nullptr || q == nullptr)
            return false;


        if (p->val != q->val)
            return false;

        return isMirror(p->left, q->right) && isMirror(p->right, q->left);
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
