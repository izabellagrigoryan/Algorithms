// #225.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>

class MyStack {
public:
    std::queue<int> queue1;
    std::queue<int> queue2;
    int topElement;
    MyStack() {
    }

    void push(int x) {
        queue1.push(x);
        topElement = x;
    }

    int pop() {
        while (queue1.size() > 1) {
            topElement = queue1.front();
            queue1.pop();
            queue2.push(topElement);
        }
        int element = queue1.front();
        queue1.pop();
        std::swap(queue1, queue2);
        return element;
    }

    int top() {
        return topElement;
    }

    bool empty() {
        return queue1.empty();
    }
}; 

int main()
{
    std::cout << "Hello World!\n";
}

