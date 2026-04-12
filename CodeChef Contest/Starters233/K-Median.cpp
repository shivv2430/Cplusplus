// Problem- Statement : https://www.codechef.com/problems/KMED

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int t = 0; t < T; t++) {

    int N, K;
    cin >> N >> K;

    int A[100];

    // Input
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    // Step 1: Bubble Sort
    for (int i = 0; i < N - 1; i++) {
      for (int j = 0; j < N - i - 1; j++) {
        if (A[j] > A[j + 1]) {
          int temp = A[j];
          A[j] = A[j + 1];
          A[j + 1] = temp;
        }
      }
    }

    int M = N - K;         // remaining size
    int mid = (M - 1) / 2; // median index

    int lastPrinted = -1; // to avoid duplicates

    // Step 2: Check all windows
    for (int i = 0; i <= N - M; i++) {
      int median = A[i + mid];

      if (median != lastPrinted) {
        cout << median << " ";
        lastPrinted = median;
      }
    }

    cout << endl;
  }

  return 0;
}