// #92.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        ListNode* a = nullptr;
        ListNode* b = nullptr;

        int pos = 1;


        while (pos < left) {
            a = curr;
            curr = curr->next;
            pos++;
        }
        b = curr;

        // Reverse the sublist between 'left' and 'right'
        while (pos <= right) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            pos++;
        }

        // Connect the nodes before 'left' and after 'right'
        if (a)
            a->next = prev;
        else
            head = prev;

        b->next = curr;

        return head;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
