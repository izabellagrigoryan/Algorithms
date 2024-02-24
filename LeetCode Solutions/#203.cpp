// #203.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head)
            return head;

        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* curr = dummy;

        while (curr->next)
        {
            if (curr->next->val == val)
                curr->next = curr->next->next;
            else curr = curr->next;
        }

        head = dummy->next;
        delete dummy;


        return head;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

