#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  float A[100];

  // Input elements
  cout << "Enter elements (between 0 and 1): ";
  for (int i = 0; i < n; i++) {
    cin >> A[i];

    if (A[i] < 0 || A[i] >= 1) {
      cout << "Enter values in range [0,1)";
      return 0;
    }
  }

  // Step 1: Create buckets
  float B[100][100];
  int count[100] = {0};

  // Step 2: Insert into buckets
  for (int i = 0; i < n; i++) {
    int index = n * A[i];
    B[index][count[index]] = A[i];
    count[index]++;
  }

  // Step 3: Sort each bucket (Insertion Sort)
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < count[i]; j++) {
      float key = B[i][j];
      int k = j - 1;

      while (k >= 0 && B[i][k] > key) {
        B[i][k + 1] = B[i][k];
        k--;
      }
      B[i][k + 1] = key;
    }
  }

  // Step 4: Concatenate buckets
  int index = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < count[i]; j++) {
      A[index++] = B[i][j];
    }
  }

  // Output
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }

  return 0;
}