// #1669.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode dummy(0);
        dummy.next = list1;

        ListNode* current = &dummy;

        for (int i = 0; i < a; ++i) {
            current = current->next;
        }

        ListNode* prev_a = current;

        for (int i = a; i < b + 1; ++i) {
            current = current->next;
        }

        ListNode* node_b = current->next;

        prev_a->next = list2;

        while (list2->next != nullptr) {
            list2 = list2->next;
        }

        list2->next = node_b;

        return dummy.next;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
