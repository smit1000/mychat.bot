#include <iostream>

using namespace std;

// Function to reverse the array using two pointers and manual swapping
void reverseArray(int arr[], int size) {
    int start = 0;             // Left pointer at the first element
    int end = size - 1;        // Right pointer at the last element

    while (start < end) {
        // Manual swap using a temporary variable
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers toward the center
        start++;
        end--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]); // Dynamically calculate the array size

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
