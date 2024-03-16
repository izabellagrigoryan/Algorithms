// #371.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
