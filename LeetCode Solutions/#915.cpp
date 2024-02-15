// #915.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class Solution {
public:
    int partitionDisjoint(std::vector<int>& nums)
    {
        int n = nums.size();
        int max_left = nums[0];
        int max_all = nums[0];
        int partition_index = 0;

        for (int i = 1; i < n; ++i) {
            max_all = std::max(max_all, nums[i]);
            if (nums[i] < max_left) {
                partition_index = i;
                max_left = max_all;
            }
        }

        return partition_index + 1;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

