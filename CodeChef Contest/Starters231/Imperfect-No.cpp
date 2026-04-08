// Problem : https://www.codechef.com/problems/NO25PLS

#include <iostream>
using namespace std;

bool isImperfect(int x) {
  return (x % 2 == 0 && x % 5 != 0) || (x % 5 == 0 && x % 2 != 0);
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int d = 0;

    while (true) {
      if (N - d >= 1 && isImperfect(N - d)) {
        cout << d << endl;
        break;
      }
      if (isImperfect(N + d)) {
        cout << d << endl;
        break;
      }
      d++;
    }
  }

  return 0;
}