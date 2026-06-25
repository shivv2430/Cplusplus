// Problem-Statement:https://www.codechef.com/problems/TELHOME
#include <iostream>
using namespace std;

int main() {
  int D, T;
  cin >> D >> T;

  if (T >= D)
    cout << 0 << endl;
  else
    cout << D - T << endl;

  return 0;
}