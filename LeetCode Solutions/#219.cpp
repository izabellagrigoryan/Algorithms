// #219.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_set>
class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_set<int> numSet;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k) {
                numSet.erase(nums[i - k - 1]);
            }
            if (numSet.find(nums[i]) != numSet.end()) {
                return true;
            }
            numSet.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
