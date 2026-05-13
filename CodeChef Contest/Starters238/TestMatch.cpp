// Problem Statement : https://www.codechef.com/problems/TESTTGT
#include <iostream>
using namespace std;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int australiaTotal = X + Z;

  // If India already leads
  if (Y > australiaTotal) {
    cout << 0;
  } else {
    cout << (australiaTotal - Y + 1);
  }

  return 0;
}