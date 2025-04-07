#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target)
            return mid;  // Target found
        else if (arr[mid] < target)
            low = mid + 1;  // Search in the right half
        else
            high = mid - 1;  // Search in the left half
    }
    
    return -1;  // Target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = binarySearchIterative(arr, n, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
