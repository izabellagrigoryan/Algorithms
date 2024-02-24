// #25.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        if (!head)
            return head;

        ListNode* curr = new ListNode();
        ListNode* next = nullptr;
        next = head;
        curr = head;
        ListNode* tmp1 = new ListNode();
        ListNode* tmp2 = nullptr;
        tmp2 = tmp1;

        int size = 0;
        while (next)
        {
            next = next->next;
            size++;
        }

        if (k > size)
            return head;

        int k1 = size / k;
        size = 1;
        while (curr && size <= k1)
        {
            ListNode* prev = nullptr;
            for (int i = 0; i < k; i++)
            {
                if (curr)
                {
                    next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }

            }

            if (!tmp1->next)
                tmp1->next = prev;
            else
            {
                int i = 0;
                while (tmp1->next && i < k)
                {
                    tmp1 = tmp1->next;
                    i++;
                }
                if (prev)
                    tmp1->next = prev;
            }
            size++;
        }

        head = tmp2;
        if (curr)
        {
            while (tmp1 && tmp1->next)
                tmp1 = tmp1->next;
            if (tmp1)
                tmp1->next = curr;
        }

        return head->next;
    }
};

int main()
{
    ListNode* one = new ListNode(1);
    one->next = new ListNode(2);
    one->next->next = new ListNode(3);
    one->next->next->next = new ListNode(4);
    one->next->next->next->next = new ListNode(5);
    //one->next->next->next->next->next = new ListNode(6);*/

    Solution sol;
    one = sol.reverseKGroup(one, 3);
    std::cout << "ddd";
}

