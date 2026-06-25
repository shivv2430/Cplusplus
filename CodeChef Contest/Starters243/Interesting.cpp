// Problem-statement: https://www.codechef.com/START243D/problems/INTMTCH
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  if (abs(X - Y) <= 2)
    cout << "Interesting";
  else
    cout << "Boring";

  return 0;
}