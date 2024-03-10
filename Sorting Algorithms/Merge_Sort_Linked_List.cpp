// Merge_Sort_Linked_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked lists
Node* merge(Node* left, Node* right) {
    Node dummy(0);
    Node* tail = &dummy;

    while (left && right) {
        if (left->data < right->data) {
            tail->next = left;
            left = left->next;
        }
        else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }

    tail->next = left ? left : right;
    return dummy.next;
}

// Function to find the middle node of the linked list
Node* findMiddle(Node* head) {
    if (!head || !head->next)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Function to perform merge sort on linked list
Node* mergeSort(Node* head) {
    if (!head || !head->next)
        return head;

    Node* middle = findMiddle(head);
    Node* secondHalf = middle->next;
    middle->next = nullptr;

    Node* left = mergeSort(head);
    Node* right = mergeSort(secondHalf);

    return merge(left, right);
}

// Function to insert a node at the end of the linked list
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print linked list
void printList(Node* head) {
    while (head) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Test the merge sort function
int main() {
    Node* head = nullptr;
    insertAtEnd(head, 4);
    insertAtEnd(head, 1);
    insertAtEnd(head, 5);
    insertAtEnd(head, 7);
    insertAtEnd(head, 2);
    insertAtEnd(head, 9);

    std::cout << "Original list: ";
    printList(head);

    head = mergeSort(head);

    std::cout << "Sorted list: ";
    printList(head);


    std::cout << "hello world";
}