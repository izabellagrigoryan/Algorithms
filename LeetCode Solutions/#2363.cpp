// #2363.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> mergeSimilarItems(std::vector<std::vector<int>>& items1, std::vector<std::vector<int>>& items2) 
    {
        std::unordered_map<int, int> m_map;
        for (const auto& item : items1)
        {
            m_map[item[0]] += item[1];
        }
        for (const auto& item : items2)
        {
            m_map[item[0]] += item[1];
        }

        std::vector<std::vector<int>> merged;
        
        for (const auto& pair : m_map) {
            merged.push_back({ pair.first, pair.second });
        }
        std::sort(merged.begin(), merged.end());

        return merged;
    }
};

int main()
{
    std::vector<int> v1 = { 1, 1 };
    std::vector<int> v2 = { 3, 2 };
    std::vector<int> v3 = { 2, 3 };

    std::vector<int> v4 = { 3, 2 };
    std::vector<int> v5 = { 2, 1 };
    std::vector<int> v6 = { 1, 3 };

    std::vector<std::vector<int>> items1;
    items1.push_back(v1);
    items1.push_back(v2);
    items1.push_back(v3);

    std::vector<std::vector<int>> items2;
    items2.push_back(v4);
    items2.push_back(v5);
    items2.push_back(v6);

    Solution sol;
    std::vector<std::vector<int>> merged;
    merged = sol.mergeSimilarItems(items1, items2);

    std::cout << "Merged vector";

}

