// #80.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
int removeDuplicates(std::vector<int>& nums) 
{
    int count = 0;
    for (int i = 2; i < nums.size(); ++i)
    {
        if (nums[i] == nums[i - 2 - count])
        {
            ++count;
        }
        else
        {
            nums[i - count] = nums[i];
        }
    }
    return nums.size() - count;
};
 
int main()
{

}
