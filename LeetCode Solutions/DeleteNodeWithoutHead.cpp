// DeleteNodeWithoutHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

class Solution {
public:
    void DeleteNodeWithoutHead(ListNode curr) {
        curr.val = curr.next->val;
        curr.next = curr.next->next;
        
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
