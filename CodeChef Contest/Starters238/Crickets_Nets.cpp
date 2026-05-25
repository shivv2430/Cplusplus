// problem Statement : https://www.codechef.com/problems/CRNET
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int X;
    cin >> X;

    int cost;

    if (X <= 20) {
      cost = X * 10;
    } else {
      cost = 200 + ((X - 20) / 2) * 5;
    }

    cout << cost << endl;
  }

  return 0;
}