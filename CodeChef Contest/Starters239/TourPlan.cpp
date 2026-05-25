// problem Statement : https://www.codechef.com/problems/TOURPLAN

#include <iostream>
using namespace std;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int cost;

  if (Z <= 50) {
    cost = X;
  } else {
    cost = X + (Z - 50) * Y;
  }

  cout << cost << endl;

  return 0;
}