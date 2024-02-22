// #20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {

                stack.push(c);
            }
            else {

                if (stack.empty())
                {
                    return false;
                }
                char topBracket = stack.top();
                if ((c == ')' && topBracket != '(') ||
                    (c == '}' && topBracket != '{') ||
                    (c == ']' && topBracket != '[')) {

                    return false;
                }
                stack.pop();
            }
        }

        return stack.empty();
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

