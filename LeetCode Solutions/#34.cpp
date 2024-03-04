// #34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Solution {
public:
    /* vector<int> searchRange(vector<int>& nums, int target) {
         int first, count = 0;
         bool flag = false;
         for(int i = 0; i < nums.size(); i++)
         {
             if(nums[i] == target)
             {
                 count++;
                 if(count == 1)
                     first = i;
                 flag = true;
             }
         }
         if(flag)
             return {first, first + count - 1};
         return {-1, -1};
     }*/

        std::vector<int> searchRange(std::vector<int>& nums, int target) {

        int n = nums.size();
        int start = -1, end = -1;

        // Binary search to find the starting position of the target
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                start = mid;
                right = mid - 1; // Continue searching for the starting position to the left
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        // Binary search to find the ending position of the target
        left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                end = mid;
                left = mid + 1; // Continue searching for the ending position to the right
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return { start, end };
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
