// #3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <unordered_map>
#include <algorithm>

int lengthOfLongestSubstring(std::string s) {
    int maxLength = 0;
    std::unordered_map<char, int> charIndexMap;
    int windowStart = 0;

    for (int windowEnd = 0; windowEnd < s.length(); ++windowEnd) {
        char currentChar = s[windowEnd];

        // If the current character is found in the map and its index is greater than or equal to the window start,
        // update the window start to the next index after the previous occurrence of the character
        if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= windowStart) {
            windowStart = charIndexMap[currentChar] + 1;
        }

        // Update the index of the current character in the map
        charIndexMap[currentChar] = windowEnd;

        // Update the maximum length of the substring
        maxLength = std::max(maxLength, windowEnd - windowStart + 1);
    }

    return maxLength;
}

int main() {
    std::string s = "abcabcbb";
    std::cout << "Length of the longest substring without repeating characters: "
        << lengthOfLongestSubstring(s) << std::endl; // Output: 3

    return 0;
}