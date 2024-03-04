// #189.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    k %= n; // To handle cases where k > n

    // Reverse the entire array
    std::reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    std::reverse(nums.begin(), nums.begin() + k);

    // Reverse the remaining elements
    std::reverse(nums.begin() + k, nums.end());
}

int main() {
    std::vector<int> nums = { 1, 2, 3, 4, 5 };
    int k = 2;

    std::cout << "Original array: ";
    for (int num : nums)
        std::cout << num << " ";
    std::cout << std::endl;

    rotate(nums, k);

    std::cout << "Array after rotation by " << k << " steps to the right: ";
    for (int num : nums)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
