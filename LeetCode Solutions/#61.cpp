// #61.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0)
            return head;

        int length = 0;
        ListNode* current = head;
        while (current) {
            length++;
            current = current->next;
        }

        k %= length;

        if (k == 0)
            return head;

        ListNode* prev = nullptr;
        current = head;
        for (int i = 0; i < length - k; ++i) {
            prev = current;
            current = current->next;
        }

        ListNode* new_head = current;
        prev->next = nullptr;
        ListNode* tail = new_head;
        while (tail->next)
            tail = tail->next;
        tail->next = head;

        return new_head;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
