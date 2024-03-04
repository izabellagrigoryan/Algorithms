// #242.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false; // Anagrams must have the same length
        }

        // Use an array to represent the counts of characters
        int charCount[26] = { 0 }; // Assuming only lowercase letters

        // Count the frequency of characters in string s
        for (char c : s) {
            charCount[c - 'a']++;
        }

        // Decrement the frequency of characters in string t
        for (char c : t) {
            if (charCount[c - 'a'] == 0) {
                return false; // If a character in t is not found in s or its count becomes negative, t is not an anagram
            }
            charCount[c - 'a']--;
        }

        return true;
    }

};

int main()
{
    std::cout << "Hello World!\n";
}
