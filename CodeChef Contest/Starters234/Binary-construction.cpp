// Problem-Statement : https://www.codechef.com/problems/BINCON

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int zeros = N / 2;
    int ones = N - zeros;

    // print 0s
    for (int i = 0; i < zeros; i++) {
      cout << '0';
    }

    // print 1s
    for (int i = 0; i < ones; i++) {
      cout << '1';
    }

    cout << endl;
  }

  return 0;
}