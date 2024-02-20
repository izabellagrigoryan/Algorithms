// #142.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = nullptr;
        ListNode* fast = nullptr;
        slow = head;
        fast = head;

        bool hasCycle = false;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        if (!hasCycle)
            return nullptr;

        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}
