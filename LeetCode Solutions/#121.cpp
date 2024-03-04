// #121.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <limits>

int maxProfit(std::vector<int>& prices) {
    int min_price = std::numeric_limits<int>::max();
    int max_profit = 0;

    for (int price : prices) {
        // Update the minimum price seen so far
        min_price = std::min(min_price, price);

        // Calculate the profit that can be made by selling on the current day
        int profit = price - min_price;

        // Update the maximum profit if the current profit is greater
        max_profit = std::max(max_profit, profit);
    }

    return max_profit;
}


int main() {
    std::vector<int> prices = { 7, 1, 5, 3, 6, 4 };
    std::cout << "Maximum profit: " << maxProfit(prices) << std::endl;
    return 0;
}
