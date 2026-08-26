// Problem Statement : https://www.codechef.com/START253C/problems/GRDJUMP
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int A, B, P, Q, R;
    cin >> A >> B >> P >> Q >> R;

    int ans = 1000000;

    // Try using 0, 1, 2, ... diagonal moves
    for (int diagonal = 0; diagonal <= A && diagonal <= B; diagonal++) {

      // Cost of diagonal moves
      int cost = diagonal * R;

      // Remaining right and up moves
      int right = A - diagonal;
      int up = B - diagonal;

      // For right movement:
      // We can move 2 steps for P coins.
      cost = cost + (right / 2) * P;

      // If 1 step is left, we need one more P
      if (right % 2 == 1) {
        cost = cost + P;
      }

      // For up movement:
      // We can move 2 steps for Q coins.
      cost = cost + (up / 2) * Q;

      // If 1 step is left, we need one more Q
      if (up % 2 == 1) {
        cost = cost + Q;
      }

      // Keep the minimum cost
      if (cost < ans) {
        ans = cost;
      }
    }

    cout << ans << endl;
  }

  return 0;
}