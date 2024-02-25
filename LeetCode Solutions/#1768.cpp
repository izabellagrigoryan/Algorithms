// #1768.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        std::string mergedString;

        // Merge the strings by alternating characters
        int i = 0, j = 0;
        while (i < len1 && j < len2) {
            mergedString.push_back(word1[i++]);
            mergedString.push_back(word2[j++]);
        }

        // Append the remaining characters of the longer string
        while (i < len1) {
            mergedString.push_back(word1[i++]);
        }

        while (j < len2) {
            mergedString.push_back(word2[j++]);
        }

        return mergedString;
    }
};

int main()
{
    
    return 0;
}

