// #387.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {
public:
    int firstUniqChar(std::string s) {
        int seen_once = 0, seen_twice = 0;

        for (char c : s) {
            int mask = 1 << (c - 'a');
            seen_twice |= (seen_once & mask);
            seen_once |= mask;
        }

        for (int i = 0; i < s.size(); ++i) {
            int mask = 1 << (s[i] - 'a');
            if (!(seen_twice & mask)) {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution sol;
    int b = sol.firstUniqChar("bccdcdcc");
    std::cout << "Hello World!\n";
}
