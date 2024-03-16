// #9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

// Approach 1: Convert to string
bool isPalindrome1(int x) {
    std::string s = std::to_string(x);
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

// Approach 2: Reverse the integer
bool isPalindrome2(int x) {
    // Handle negative numbers and numbers ending with 0
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // When the length of the number is odd, we need to ignore the middle digit
    return x == reversed || x == reversed / 10;
}

int main() {
    int x = 12321;
    std::cout << "Approach 1: " << std::boolalpha << isPalindrome1(x) << std::endl; // Output: true
    std::cout << "Approach 2: " << std::boolalpha << isPalindrome2(x) << std::endl; // Output: true

    return 0;
}