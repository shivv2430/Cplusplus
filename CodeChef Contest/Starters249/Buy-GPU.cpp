// Problem-Statement : https://www.codechef.com/START249D/problems/GPUBUY

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (Y >= Z) {
      cout << -1 << endl;
      continue;
    }

    int price = X;
    int coins = 0;
    int months = 0;

    while (coins < price) {
      price += Y;
      coins += Z;
      months++;
    }

    cout << months << endl;
  }

  return 0;
}