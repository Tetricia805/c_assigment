// NAJJUMA TEOPISTA B24271
/* Algorithm:
Step 1. Initialize: Start by assuming the first element is the maximum.
Step 2. Iterate: Traverse the array from the second element to the end.
Step 3. Compare: For each element, compare it with the current maximum.
Step 4. Update: If the current element is greater than the current maximum,
update the maximum. Step 5. Return: After the loop, the maximum element will be
the largest one.*/

// Implementation

#include <stdio.h>
// Function to find the maximum element in an array
int findMax(int arr[], int size) {

  // Initialize max with the first element of the array
  int max = arr[0];

  // Iterate through the array
  for (int i = 1; i < size; i++) {
    // Compare current element with max
    if (arr[i] > max) {
      max = arr[i]; // Update max if current element is larger
    }
  }
  // Return the maximum element
  return max;
}

int main() {
  // Example array
  int arr[] = {3, 1, 4, 1, 8};
  int size = sizeof(arr) /
             sizeof(arr[0]); // Calculate the number of elements in the array

  // Find the maximum element
  int max = findMax(arr, size);

  // Print the result
  printf("The maximum element in the array is: %d\n", max);

  return 0;
}