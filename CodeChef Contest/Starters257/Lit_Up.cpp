// Problem_Statement : https://www.codechef.com/START257C/problems/LITUP

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;
    int C[N];
    for (int i = 0; i < N; i++) {
      cin >> C[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {

        bool possible = true;

        for (int x = 0; x < N; x++) {

          if (abs(i - x) > K && abs(j - x) > K) {
            possible = false;
            break;
          }
        }

        if (possible) {
          ans = min(ans, C[i] + C[j]);
        }
      }
    }

    if (ans == INT_MAX)
      cout << -1 << endl;
    else
      cout << ans << endl;
  }

  return 0;
}