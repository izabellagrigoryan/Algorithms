// #1290.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
     int getDecimalValue(ListNode* head) {
         int decimalValue = 0;

         while (head != nullptr) 
         {
             
             decimalValue = (decimalValue << 1) | head->val;
             head = head->next;
         }

         return decimalValue;
     }
 };

int main()
{
    std::cout << "Hello World!\n";
}
