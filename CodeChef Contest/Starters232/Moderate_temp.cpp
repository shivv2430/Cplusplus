// Problem Statement : https://www.codechef.com/problems/MODTEMP

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int A[100];

    // Input array
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    // Step 1: find min and max
    int mn = A[0], mx = A[0];

    for (int i = 1; i < N; i++) {
      if (A[i] < mn) {
        mn = A[i];
      }
      if (A[i] > mx) {
        mx = A[i];
      }
    }

    // Step 2: count moderate days
    int count = 0;
    for (int i = 0; i < N; i++) {
      if (A[i] != mn && A[i] != mx) {
        count++;
      }
    }

    // Output result
    cout << count << endl;
  }

  return 0;
}