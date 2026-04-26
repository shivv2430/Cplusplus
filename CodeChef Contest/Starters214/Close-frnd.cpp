// Problem-Statement: https://www.codechef.com/problems/P4HOME

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    cout << 2 * min(y, z) << endl;
  }
}
