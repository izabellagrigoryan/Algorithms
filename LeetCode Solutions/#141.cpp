// #141.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    bool hasCycle(ListNode* head) {
        ListNode* slow = new ListNode();
        slow = head;
        ListNode* fast = new ListNode();
        fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next;
            if (fast == slow)
                return true;
            slow = slow->next;
            fast = fast->next;
        }

        return false;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
