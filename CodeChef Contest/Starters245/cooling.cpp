// Problem-Statement:https://www.codechef.com/START245D/problems/COOLCON
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int X, Y;
    cin >> X >> Y;

    int ans = 0;

    for (int i = X; i > Y; i--) {
      ans += (i + 9) / 10; // ceil(i / 10)
    }

    cout << ans << endl;
  }

  return 0;
}