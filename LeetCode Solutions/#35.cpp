// #35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) 
    {

        int left = 0, mid;
        int right = nums.size() - 1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid - 1] >= target && mid != 0)
                right = mid - 1;
            else
                left = mid + 1;
        }

        if (left == 0) {
            if (nums[left] < target)
                return left + 1;
            else
                return left;
        }

        if (nums[right] < target)
            return right + 1;
        else
            return right;

    }
};
int main()
{
   
}
