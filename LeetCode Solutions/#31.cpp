// #31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <vector>

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Find the first decreasing element from the right
        while (i >= 0 && nums[i] >= nums[i + 1])
            i--;

        if (i >= 0) {
            // Find the smallest element in the suffix that is greater than nums[i]
            int j = n - 1;
            while (j >= 0 && nums[j] <= nums[i])
                j--;

            // Swap nums[i] and nums[j]
            std::swap(nums[i], nums[j]);
        }

        // Reverse the suffix
        std::reverse(nums.begin() + i + 1, nums.end());
    }
};

int main()
{
    std::vector<int> vec = { 1, 2, 7, 3, 6, 5, 4 };
    Solution sol;
    sol.nextPermutation(vec);

    return 0;
}
