#include "Queue.h"

// Push new element to rear of queue
template <typename T>
void Queue<T>::push(T value) {
    Node<T>* newNode = new Node<T>(value);  // Create a new node withgiven value
    if (empty()) {                          // If queue is empty
        frontNode = rearNode = newNode;     // Set both front & rear to new node
    } else {                                
        rearNode->next = newNode;           // link the new node to the end of the queue
        rearNode = newNode;                 // Update the rear to be new node
    }
}

// Remove front element from queue
template <typename T>
void Queue<T>::pop() {
    if (empty()) return;                    // nothing if queue is empty
    Node<T>* temp = frontNode;              // store the current front node
    frontNode = frontNode->next;            // Move front pointer to next node
    delete temp;                            // Delete old front node
    if (frontNode == nullptr) {             // If queue is now empty
        rearNode = nullptr;                 // Set rear to nullptr well
    }
}

// Retrieve front element without removing it
template <typename T>
T Queue<T>::front() {
    if (empty()) throw std::runtime_error("Queue is empty"); // Throw error if queue empty
    return frontNode->data;                                 // Return data front node
}

// Check if queue empty
template <typename T>
bool Queue<T>::empty() const {
    return frontNode == nullptr;            // Queue empty front nullptr
}

// Display all elements in queue from front to rear
template <typename T>
void Queue<T>::display() const {
    Node<T>* current = frontNode;           // Start at front node
    while (current != nullptr) {            // Loop  node
        std::cout << current->data << " ";  // show the data of the current node
        current = current->next;            // Move to next node
    }
    std::cout << std::endl;                 // End line after all elements printed
}

// Move element at front of queue to rear
template <typename T>
void Queue<T>::move_to_rear() {
    if (empty()) return;                    // Do nothing if queue is empty
    T frontValue = front();                 // Store front value
    pop();                                  // Remove front element
    push(frontValue);                       // Reinsert it at rear of queue
}

// Sort elements in queue in ascending order using insertion sort
template <typename T>
void Queue<T>::insertion_sort_queue() {
    if (empty()) return;                    // nothing if the queue empty

    Queue<T> sortedQueue;                   // Temporary queue hold sorted elements

    // Move each element sortedQueue in correct order
    while (!empty()) {
        T current = front();                // Get front element
        pop();                              // Remove from original queue

        // Insert current element into correct position sortedQueue
        while (!sortedQueue.empty() && sortedQueue.front() < current) {
            T temp = sortedQueue.front();   // Store front element of sortedQueue
            sortedQueue.pop();              // Remove it sortedQueue
            push(temp);                     // Push it back to original queue
        }

        sortedQueue.push(current);          // Place current in sortedQueue at correct position
    }

    // Move sorted elements back to original queue
    while (!sortedQueue.empty()) {
        push(sortedQueue.front());          // Push each element back to original queue
        sortedQueue.pop();                  // Remove from sortedQueue
    }
}

// Explicit template instantiation for int
template class Queue<int>;
