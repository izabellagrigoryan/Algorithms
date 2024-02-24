// #143.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    void reorderList(ListNode* head) 
    {
        if (!head)
            return;

        ListNode* prev = nullptr;
        prev = head;
        ListNode* curr = nullptr;
        curr = prev;
        ListNode* next = nullptr;
        next = head->next;

        while (next && next->next)
        {
            prev = prev->next;
            next = next->next->next;
        }

        curr = prev->next;
        prev->next = nullptr;
        prev = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        curr = prev;
        prev = head;

        while (prev && curr)
        {
            ListNode* first = prev->next;
            ListNode* second = curr->next;
            
            prev->next = curr;
            curr->next = first;
            prev = first;
            curr = second;
        }
        
    }
};

int main()
{
    ListNode* one = new ListNode(1);
    one->next = new ListNode(2);
    one->next->next = new ListNode(3);
    one->next->next->next = new ListNode(4);
    one->next->next->next->next = new ListNode(5);
    one->next->next->next->next->next = new ListNode(6);
    
    Solution sol;
    sol.reorderList(one);
}
