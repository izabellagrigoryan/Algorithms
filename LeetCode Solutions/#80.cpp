// #80.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int count = 1, s = 1;
        for (int i = 2; i < nums.size() + 1; i++)
        {
            if (nums[s - 1] == nums[i - 1])
            {
                if (count == 1)
                {
                    int temp = nums[s];
                    nums[s] = nums[i - 1];
                    nums[i - 1] = temp;
                    count++;
                    s++;
                }
            }
            else
            {
                if (count == 2)
                {
                    int temp = nums[s];
                    nums[s] = nums[i - 1];
                    nums[i - 1] = temp;
                    count = 1;

                    s++;
                }
                else
                    if (nums[s - 1] < nums[i - 1])
                    {
                        int temp = nums[s];
                        nums[s] = nums[i - 1];
                        nums[i - 1] = temp;
                        count = 1;

                        s++;
                    }
            }
        }
        return s;
    }
};

int main()
{
    

}
