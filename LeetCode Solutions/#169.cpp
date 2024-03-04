// #169.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <vector>

int majorityElement(std::vector<int>& nums) {
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == candidate) {
            count++;
        }
        else {
            count--;
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

    return candidate;
};

int main()
{
    std::vector<int> vec = { 3, 2, 3 };
    int d = majorityElement(vec);
    std::cout << "Hello World!\n";

}
