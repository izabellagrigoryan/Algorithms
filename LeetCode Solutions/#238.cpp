// #238.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> answer(n, 1);

        // Calculate products of all elements to the left of each element
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            answer[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        // Calculate products of all elements to the right of each element
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            answer[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return answer;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
