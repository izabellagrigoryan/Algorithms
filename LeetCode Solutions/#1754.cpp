// #1754.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {
public:
    std::string largestMerge(std::string word1, std::string word2) {
        std::string merge;

        while (!word1.empty() || !word2.empty()) {
            if (word1 > word2) {
                merge += word1[0];
                word1 = word1.substr(1);
            }
            else {
                merge += word2[0];
                word2 = word2.substr(1);
            }
        }

        return merge;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
