// Problem Statement : https://www.codechef.com/problems/ALLZR

#include <iostream>
using namespace std;

int main() {
  int T, A, B, C;
  cin >> T;

  for (int i = 0; i < T; i++) {
    cin >> A >> B >> C;

    if (C % 3 == 0 && B == 2 * A + (C / 3)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}