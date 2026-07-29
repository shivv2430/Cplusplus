// Problem-statement : https://www.codechef.com/START249D/problems/PRDEXC
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int X, Y, P;
    cin >> X >> Y >> P;

    int ans = INT_MAX;

    for (int i = 0; i <= 200; i++) {
      for (int j = 0; j <= 200; j++) {
        if ((X + i) * (Y + j) >= P) {
          ans = min(ans, i + j);
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}