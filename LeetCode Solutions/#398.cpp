// #398.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>
class Solution {
private:
    std::vector<int> nums;
    std::unordered_map<int, std::vector<int>> indices;

public:
    Solution(std::vector<int>& nums) {
        this->nums = nums;

        // Preprocess indices
        for (int i = 0; i < nums.size(); ++i) {
            indices[nums[i]].push_back(i);
        }
    }

    int pick(int target) {
        auto& target_indices = indices[target];
        int random_index = target_indices[rand() % target_indices.size()];
        return random_index;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
