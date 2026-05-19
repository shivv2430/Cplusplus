#include <iostream>
using namespace std;

int main() {
  int n;

  // Input size of array
  cout << "Enter number of elements: ";
  cin >> n;

  int arr[n];

  // Input array elements
  cout << "Enter array elements:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Selection Sort
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    // Swap elements
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }

  // Display sorted array
  cout << "Sorted array:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}