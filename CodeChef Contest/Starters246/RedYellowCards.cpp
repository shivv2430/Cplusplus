// Problem_Statement : https://www.codechef.com/problems/RYCARDS

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int R, Y;
    cin >> R >> Y;

    int extra = max(0, Y - (R + 1));
    int ans = R + (extra + 1) / 2;

    cout << ans << endl;
  }

  return 0;
}