// #338.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans(n + 1);
        ans[0] = 0; // Number of 1's in binary representation of 0 is 0
        for (int i = 1; i <= n; ++i) {
            ans[i] = ans[i >> 1] + (i & 1); // Number of 1's in i = Number of 1's in i/2 + 1 if i is odd
        }
        return ans;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
