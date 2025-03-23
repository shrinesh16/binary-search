#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key is greater, ignore the left half
        if (arr[mid] < key)
            left = mid + 1;

        // If key is smaller, ignore the right half
        else
            right = mid - 1;
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {11, 12, 22, 25, 34, 64, 90}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 25;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}
