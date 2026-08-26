// Problem Statement : https://www.codechef.com/START253C/problems/POSHOP

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int C[100];

    for (int i = 0; i < N; i++) {
      cin >> C[i];
    }

    int ans = 0;

    // Buying only one item
    for (int i = 0; i < N; i++) {
      if (C[i] > ans) {
        ans = C[i];
      }
    }

    // Buying two items
    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {

        // Second item's cost should be >= first item's cost
        if (C[i] <= C[j]) {

          int total = C[i] + C[j];

          if (total > ans) {
            ans = total;
          }
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}