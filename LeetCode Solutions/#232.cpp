// #232.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

class MyQueue {
    std::stack<int> inputStack;
    std::stack<int> outputStack;

public:
    MyQueue() {

    }

    void push(int x) {
        inputStack.push(x);
    }

    int pop() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        int element = outputStack.top();
        outputStack.pop();
        return element;
    }

    int peek() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        return outputStack.top();
    }

    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

