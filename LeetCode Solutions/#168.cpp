// #168.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class Solution {
public:
    std::string convertToTitle(int columnNumber) 
    {

        std::string title = "";

        while (columnNumber > 0) 
        {
            int remainder = (columnNumber - 1) % 26;
            title = char('A' + remainder) + title;
            columnNumber = (columnNumber - 1) / 26;
        }

        return title;
    }
};
 
int main()
{
    std::cout << "Hello World!\n";
}

