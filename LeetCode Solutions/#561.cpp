// #561.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>

class Solution{
public:
    int arrayPairSum(std::vector<int>&nums) {
        std::sort(nums.begin(), nums.end());

        int sum = 0;
        // Sum up the minimum of each pair
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }

        return sum;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
