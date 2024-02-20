// #922.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortArrayByParityII(std::vector<int>& nums)
    {
        int k = 0;
        int j = 1;

        while (k < nums.size()) {
            if (nums[k] % 2 == 0) {
                k += 2;
            }
            else {
                std::swap(nums[k], nums[j]);
                j += 2;
            }
        }
        return nums;
    } 
};

int main()
{
    Solution sol;
    std::vector<int> vec = { 2, 4, 6, 8, 3, 5, 7, 9 };
    std::vector<int> newvec = sol.sortArrayByParityII(vec);
    return 0;
}
