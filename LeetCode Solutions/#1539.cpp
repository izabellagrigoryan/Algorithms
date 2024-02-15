// #1539.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int findKthPositive(std::vector<int>& arr, int k) {
        int j = 1;
        int count = 0;
        int i = 0;
        while (i < arr.size())
        {
            if (count != k)
            {
                if (arr[i] != j)
                {
                    count++;
                }
                else
                {
                    i++;
                }
                j++;
            }
            else
                return --j;
        }
        return j + (k - count) - 1;

    }
};

int main()
{
    std::cout << "Hello World!\n";
}

