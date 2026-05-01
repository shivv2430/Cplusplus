#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the Array: ";
  cin >> n;

  int A[100];

  for (int i = 0; i < n; i++) {
    cin >> A[i];
    if (A[i] < 0) {
      cout << "Only non-negative numbers allowed";
      return 0;
    }
  }

  // Find maximum element
  int Max = A[0];
  for (int i = 1; i < n; i++) {
    if (A[i] > Max) {
      Max = A[i];
    }
  }

  // Count array
  int Count[100] = {0};

  // Store frequency
  for (int i = 0; i < n; i++) {
    Count[A[i]]++;
  }

  // Cumulative sum
  for (int i = 1; i <= Max; i++) {
    Count[i] += Count[i - 1];
  }

  // Sorted array
  int sortedArray[100];

  for (int i = n - 1; i >= 0; i--) {
    sortedArray[Count[A[i]] - 1] = A[i];
    Count[A[i]]--;
  }

  // Output
  cout << "Sorted Array: ";
  for (int i = 0; i < n; i++) {
    cout << sortedArray[i] << " ";
  }

  return 0;
}