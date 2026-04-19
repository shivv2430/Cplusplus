// Problem-Statement : https://www.codechef.com/problems/ADDPOS
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      sum += A; // calculate total sum
    }

    int X = 0;

    if (sum < 0) {
      // ceil division for positive result
      X = (-sum + N - 1) / N;
    }

    cout << X << endl;
  }

  return 0;
}