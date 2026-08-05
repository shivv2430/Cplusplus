// Problem-Statement : https://www.codechef.com/START250D/problems/BISHOPMV

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // Different colors -> impossible
    if ((x1 + y1) % 2 != (x2 + y2) % 2) {
      cout << -1 << endl;
    }
    // Same diagonal -> 1 move
    else if ((x1 + y1 == x2 + y2) || (x1 - y1 == x2 - y2)) {
      cout << 1 << endl;
    }
    // Otherwise -> 2 moves
    else {
      cout << 2 << endl;
    }
  }

  return 0;
}
