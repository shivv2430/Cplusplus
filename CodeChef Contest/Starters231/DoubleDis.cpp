// Problem - statement : https://www.codechef.com/problems/DBDISC

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    vector<int> A(N), B(N);

    for (int i = 0; i < N; i++)
      cin >> A[i];
    for (int i = 0; i < N; i++)
      cin >> B[i];

    int max_taste = 0;

    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {

        int mx = max(A[i], A[j]);
        int mn = min(A[i], A[j]);

        int discount = min(mx / 2, 100);
        int total_cost = mn + (mx - discount);

        if (total_cost <= K) {
          max_taste = max(max_taste, B[i] + B[j]);
        }
      }
    }

    cout << max_taste << endl;
  }

  return 0;
}