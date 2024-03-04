// #268.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int totalSum = (n * (n + 1)) / 2; // Sum of numbers in the range [0, n]
        int arraySum = 0; // Sum of numbers in the array

        // Calculate the sum of numbers in the array
        for (int num : nums) {
            arraySum += num;
        }

        // The missing number is the difference between the total sum and the sum of the array
        return totalSum - arraySum;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
