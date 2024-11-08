********************README********************
This C++ program shows the implementation of a queue data structure & a recursive search function. 
It allows users to create a queue of integers, add elements to the queue, display the queue, sort it, and move the front element to the rear. 
Also it includes a recursive function to find the last occurrence of a target value in a vector.

The program consists of:
main.cpp: Demonstrates usage of the Queue and recursive search functions.
Queue.h and Queue.cpp: Define and implement the Queue class and its operations.
Recursive.h and Recursive.cpp: Define and implement the recursive search function for finding the last occurrence of a target in a vector.
README.md: Provides an overview of the program and instructions on usage.


The Queue class include:
push(): Adds an element to the rear of the queue.
pop(): Removes the front element from the queue.
front(): Returns the front element without removing it.
`empty(): Checks if the queue is empty.
display(): Displays all elements in the queue.
move_to_rear(): Moves the front element to the rear of the queue.
insertion_sort_queue(): Sorts the queue in ascending order using an insertion sort approach.

Recursive Linear Search:
The recursive function findLastOccurrence finds the last occurrence of a specified target value in a vector of integers.
This function is split into two parts:
recursiveLastOccurrence: A helper function that uses recursion to check elements from the end of the vector to the beginning.
findLastOccurrence: A wrapper function that starts the recursive search from the last element in the vector.

*How to use?*
You will need a C++ compiler

Enter 10 Integers: The program will prompt you to enter 10 integer values which will be added to the queue.
Enter these values in the order you want them to be added pressing Enter after each integer.

Queue Operations:
The program first displays the original queue.
Then it sorts the queue in ascending order and displays it.
Next it demonstrates the move_to_rear function by moving the front element to the rear and displaying the updated queue.

Recursive Search Test:
The program creates a test vector and uses the recursive function findLastOccurrence to locate the last occurrence of a specified target in the vector.
It displays the result showing the index of the last occurrence of the target or -1 if the target is not present.

![Screenshot (534) 1](Screenshot%20(534)%201.png)
![Screenshot (535) 1](Screenshot%20(535)%201.png)