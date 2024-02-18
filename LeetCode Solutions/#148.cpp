// #148.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* mid = findMiddle(head);
        ListNode* midNext = mid->next;
        mid->next = nullptr;

        ListNode* left = sortList(head);
        ListNode* right = sortList(midNext);

        return merge(left, right);
    }

private:
    ListNode* findMiddle(ListNode* head) {
        if (head == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode* head = new ListNode();
        ListNode* tail = head;

        while (left != nullptr && right != nullptr) {
            if (left->val < right->val) {
                tail->next = left;
                left = left->next;
            }
            else {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
        }

        if (left != nullptr)
            tail->next = left;
        else
            tail->next = right;

        return head->next;

    }
};
int main()
{
    std::cout << "Hello World!\n";
}

