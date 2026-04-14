// Problem Statement : https://www.codechef.com/problems/PIZZACOMP

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 0; i > T; i++) {
    int A, B;
    cin >> A >> B;
    if (10 * 10 / A > 15 * 15 / B) {
      cout << "Small" << endl;
    } else if (10 * 10 / A < 15 * 15 / B) {
      cout << "Large" << endl;
    } else
      cout << "Equal" << endl;
  }
}
