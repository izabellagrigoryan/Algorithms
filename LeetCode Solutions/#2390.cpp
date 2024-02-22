// #2390.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {
public:
    std::string removeStars(std::string s) {
        int writeIndex = 0;

        for (char c : s) {
            if (c == '*') {
                if (writeIndex > 0) {
                    --writeIndex;
                }
            }
            else {
                s[writeIndex++] = c;
            }
        }

        s.resize(writeIndex);

        return s;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

