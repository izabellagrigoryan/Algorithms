// #1979.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int findGCD(std::vector<int>& nums) {
        int smallest = *std::min_element(nums.begin(), nums.end());
        int largest = *std::max_element(nums.begin(), nums.end());
        return gcd(smallest, largest);
    }


    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
