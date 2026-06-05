// problem-statement:https://www.codechef.com/problems/DIVKIDS
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, X;
    cin >> N >> X;

    int ans = 0;

    for (int i = 0; i < N; i++) {
      int candies;
      cin >> candies;

      if (candies % X == 0) {
        ans = max(ans, candies);
      }
    }

    cout << ans << "\n";
  }

  return 0;
}