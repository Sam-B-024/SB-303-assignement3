#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <stdexcept>

// Node class for representing each element in queue
template <typename T>
class Node {
public:
    T data;                  // Holds the value of node
    Node* next;              // Pointer to next node inqueue

    // Constructor to initialize node with a value & set next nullptr
    Node(T value) : data(value), next(nullptr) {}
};

// Queue class template for implementing a queue data structure with basic operations
template <typename T>
class Queue {
private:
    Node<T>* frontNode;      // Pointer to front node of queue
    Node<T>* rearNode;       // Pointer to rear node of queue

public:
    // Constructor initializes an empty queue
    Queue() : frontNode(nullptr), rearNode(nullptr) {}

    // Destructor to clean up all nodes in queue
    ~Queue() {
        while (!empty()) {   // Keep popping elements until the queue empty
            pop();
        }
    }

    // Adds a new element to rear of the queue
    void push(T value);

    // Removes front element from queue
    void pop();

    // Returns front element in queue without removing it
    T front();

    // Checks if the queue is empty
    bool empty() const;

    // Displays all elements in queue
    void display() const;

    // Moves front element to the rear of queue
    void move_to_rear();

    // Sorts the elements in queu ascending order using insertion sort
    void insertion_sort_queue();
};

#endif // QUEUE_H