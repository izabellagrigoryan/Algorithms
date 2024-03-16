// #342.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0 || (n & (n - 1)) != 0) // Check if n is not positive or not a power of two
            return false;
        return (n & 0x55555555) != 0;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
