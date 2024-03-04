// #409.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>

class Solution {
public:
    int longestPalindrome(std::string s) {

        std::unordered_map<char, int> charCount;

        // Count the frequency of each character
        for (char c : s) {
            charCount[c]++;
        }

        int maxLength = 0;
        bool hasOddCount = false;

        // Calculate the length of the longest palindrome
        for (const auto& pair : charCount) {
            maxLength += pair.second / 2 * 2; // Add even count characters
            if (pair.second % 2 == 1) {
                hasOddCount = true; // Mark if there is any character with odd count
            }
        }

        // If there was any character with odd count, add 1 to the length
        if (hasOddCount) {
            maxLength++;
        }

        return maxLength;

    }
};
int main()
{
    std::cout << "Hello World!\n";
}
