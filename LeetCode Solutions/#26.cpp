// #26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        int i, j, lenght = nums.size();
        for (i = 0, j = 1; j < lenght; ++j)
        {
            if (nums[i] != nums[j])
                ++i;
            else
            {
                int curr = j;
                for (int k = j + 1; k < lenght; ++k)
                {
                    nums[curr] = nums[k];
                    curr++;
                }
                --lenght;
                --j;
            }
        }

        return i + 1;
    }
};

int main()
{
    
}

