// #540.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) 
        {
            int mid = left + (right - left) / 2;
            if (mid % 2 == 1)
            {
                mid--; 
            }

            if (nums[mid] == nums[mid + 1]) 
            {
                left = mid + 2;
            }
            else 
            { 
                right = mid;
            }
        }

        return nums[left];
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

