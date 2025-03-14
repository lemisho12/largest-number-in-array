
#include <iostream>
using namespace std;
int findSmallestNumber(int arr[], int size) {
 int Smallest = arr[0];
 for (int i = 1; i < size; i++) {
 if (arr[i] < Smallest) {
 Smallest = arr[i];
 }
 }
 return Smallest;
}
int main() {
 int arr[] = {10, 20, 30, 40, 50};
 int size = sizeof(arr) / sizeof(arr[0]);
 int largest = findSmallestNumber(arr, size);
 cout << "The smallest number in the array is: " << largest <<
endl;
 return 0;
}
