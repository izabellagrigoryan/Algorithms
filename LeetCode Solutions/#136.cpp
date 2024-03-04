// #136.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};
int main()
{
    std::vector<int> vec = { 2, 3, 4, 4, 3, 6, 7, 5, 5, 7, 2 };
    Solution sol;
    int s = sol.singleNumber(vec);

    std::cout << "Hello World!\n";
}
