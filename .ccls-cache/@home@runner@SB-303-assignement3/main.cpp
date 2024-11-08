//NAME: Sam Burns 
//DATE: 11/7/2024
//ASSIGNMENT: 303 Assignment 3
//SOURCES:CHATGPT for base coding understanding/start,303 class Syed Jawad Hussain Shah, PhD Candidate for base understanding of Queues, sorts, & recursion.

#include "Queue.h"
#include "Recursive.h"
#include <vector>
#include <iostream>

int main() {
    Queue<int> queue;
    const int numValues = 10;  // Fixed number values

    //enter 10 integers for the queue
    std::cout << "Please enter " << numValues << " values to push into the queue:" << std::endl;
    for (int i = 0; i < numValues; i++) {
        int value;
        std::cout << "Enter value " << (i + 1) << ": ";
        std::cin >> value;
        queue.push(value);
    }

    // elements in queue
    std::cout << "Original Queue: ";
    queue.display();

    // Sort queue
    queue.insertion_sort_queue();

    // Show sorted queue
    std::cout << "Sorted Queue: ";
    queue.display();

    // Test recursive linear search last occurrence
    std::vector<int> numbers = {1, 2, 3, 4, 2, 5, 2, 6};
    int target;

    // Allow user to choose target to search for in vector
    std::cout << "Enter target value to find its last occurrence in the vector: ";
    std::cin >> target;

    // Find last occurrence of target in numbers vector
    int lastIndex = findLastOccurrence(numbers, target);
    if (lastIndex != -1) {
        std::cout << "The last occurrence of " << target << " is at index " << lastIndex << "." << std::endl;
    } else {
        std::cout << "The target " << target << " is not in the vector." << std::endl;
    }

    // Additional test cases recursive search
    std::vector<int> test1 = {1, 2, 3, 2, 4, 5};
    std::vector<int> test2 = {5, 5, 5, 5};
    std::vector<int> test3 = {1, 3, 7, 8, 9};

    std::cout << "Last occurrence of 2 in test1: " << findLastOccurrence(test1, 2) << " (Expected: 3)" << std::endl;
    std::cout << "Last occurrence of 5 in test2: " << findLastOccurrence(test2, 5) << " (Expected: 3)" << std::endl;
    std::cout << "Last occurrence of 8 in test3: " << findLastOccurrence(test3, 8) << " (Expected: 3)" << std::endl;
    std::cout << "Last occurrence of 10 in test3: " << findLastOccurrence(test3, 10) << " (Expected: -1)" << std::endl;

    return 0;
}




