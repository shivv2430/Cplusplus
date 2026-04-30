// Problem Statement : https://www.codechef.com/problems/EXGS

#include <iostream>
using namespace std;

// X= number of invite guest
// Y = total number of guests
int main() {
  int X, Y;
  cin >> X >> Y;
  int extra_guest = Y - X;
  cout << (100 * X) + extra_guest * 150;
}
