// #1721.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;
        ListNode* current = head;
        while (current) {
            length++;
            current = current->next;
        }

        int kthFromEnd = length - k + 1;

        ListNode* kthFromBegin = nullptr;
        ListNode* kthFromEndNode = nullptr;
        current = head;
        for (int i = 1; i <= length; ++i) {
            if (i == k) kthFromBegin = current;
            if (i == kthFromEnd) kthFromEndNode = current;
            current = current->next;
        }

        // Swap values
        int temp = kthFromBegin->val;
        kthFromBegin->val = kthFromEndNode->val;
        kthFromEndNode->val = temp;

        return head;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
