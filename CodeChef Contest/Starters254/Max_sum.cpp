// Problem statement : https://www.codechef.com/START254C/problems/MAXSUM77

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    int totalSum = 0;

    for (int i = 0; i < N; i++) {
      cin >> A[i];
      totalSum += A[i];
    }

    int remaining = N - K;

    // Sum of first remaining elements
    int windowSum = 0;
    for (int i = 0; i < remaining; i++) {
      windowSum += A[i];
    }

    int maxSum = windowSum;

    // Sliding window
    for (int i = remaining; i < N; i++) {
      windowSum += A[i];
      windowSum -= A[i - remaining];

      maxSum = max(maxSum, windowSum);
    }

    cout << maxSum << endl;
  }

  return 0;
}