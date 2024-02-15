// #167.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j)
        {
            if (numbers[i] + numbers[j] == target)
                return { i + 1, j + 1 };
            else if (numbers[i] + numbers[j] < target)
                i++;
            else j--;
        }
        return { -1, -1 };
    }
};

int main()
{
   
}

