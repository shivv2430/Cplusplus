#include <iostream>
using namespace std;

// Get maximum value in array
int getMax(int arr[], int n) {
  int mx = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > mx)
      mx = arr[i];
  }
  return mx;
}

// Counting sort based on digit (exp = 1, 10, 100, ...)
void countingSort(int arr[], int n, int exp) {
  int output[n]; // output array
  int count[10] = {0};

  // Count occurrences of digits
  for (int i = 0; i < n; i++) {
    int digit = (arr[i] / exp) % 10;
    count[digit]++;
  }

  // Convert to cumulative count
  for (int i = 1; i < 10; i++) {
    count[i] += count[i - 1];
  }

  // Build output array (traverse from end for stability)
  for (int i = n - 1; i >= 0; i--) {
    int digit = (arr[i] / exp) % 10;
    output[count[digit] - 1] = arr[i];
    count[digit]--;
  }

  // Copy back to original array
  for (int i = 0; i < n; i++) {
    arr[i] = output[i];
  }
}

// Main radix sort function
void radixSort(int arr[], int n) {
  int maxVal = getMax(arr, n);

  // Apply counting sort for each digit
  for (int exp = 1; maxVal / exp > 0; exp *= 10) {
    countingSort(arr, n, exp);
  }
}

// Driver code
int main() {
  int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
  int n = sizeof(arr) / sizeof(arr[0]);

  radixSort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}