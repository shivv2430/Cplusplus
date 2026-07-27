// Problem-Statement : https://www.codechef.com/DSAMONDAY013/problems/UTNL

#include <iostream>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  if (Y >= X) {
    cout << "UNLOCKED" << endl;
  } else {
    cout << X - Y << endl;
  }
}
