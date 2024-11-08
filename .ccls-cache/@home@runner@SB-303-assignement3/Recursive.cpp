#include "Recursive.h"

int recursiveLastOccurrence(const std::vector<int>& vec, int target, int index) {
    if (index < 0) {                 // Base case: if index is negative target not found
        return -1;                   // Return -1 to indicate targets not present
    }
    if (vec[index] == target) {      // Check if current index matches target
        return index;                // If it does return current index
    }
    // Recursive call to check previous element in vector
    return recursiveLastOccurrence(vec, target, index - 1);
}

// Public function to find last occurrence of target in vec
// Starts recursion from last element of vector
int findLastOccurrence(const std::vector<int>& vec, int target) {
    return recursiveLastOccurrence(vec, target, vec.size() - 1);  // Start at last index
}