// #26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        int s = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[s - 1])
            {
                int temp = nums[s];
                nums[s] = nums[i];
                nums[i] = temp;
                ++s;
            }

        }
        return s;
    }
};

int main()
{
    
}

