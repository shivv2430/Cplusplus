// Problem-statement : https://www.codechef.com/problems/NONNEGSUM

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N;
    cin >> N;

    int A[N]; // simple array

    // input
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    // sort array
    sort(A, A + N);

    int count = 0;
    long long sum = 0;

    // traverse from end to start
    for (int i = N - 1; i >= 0; i--) {
      if (sum + A[i] >= 0) {
        sum = sum + A[i];
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}