// #19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head)
            return nullptr;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;

        for (int i = 0; i < n; i++) {
            if (!second) {
                delete dummy; // Free the memory of the dummy node
                return nullptr; // List length is less than n
            }
            second = second->next;
        }

        while (second && second->next)
        {
            first = first->next;
            second = second->next;
        }

        first->next = first->next->next;

        head = dummy->next;
        delete dummy;

        return head;
    }
};

int main()
{
    ListNode* one = new ListNode(1);
    one->next = new ListNode(2);
    /*one->next->next= new ListNode(3);
    one->next->next->next = new ListNode(4);
    one->next->next->next->next = new ListNode(5);*/

    Solution sol;
    ListNode* sec = sol.removeNthFromEnd(one, 2);
}

