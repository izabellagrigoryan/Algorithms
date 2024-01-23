// #922.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
        std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); i += 2)
        {
            if (nums[i] % 2 != 0)
            {
                int key = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = key;
            }
        }
        for (int i = 1; i < nums.size(); i += 2)
        {
            if (nums[i] % 2 != 1)
            {
                int key = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = key;
            }
        }
        return nums;
    }
};

int main()
{
   
}
