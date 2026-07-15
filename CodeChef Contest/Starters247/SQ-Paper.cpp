// Problem-Statement: https://www.codechef.com/START247D/problems/SQPAPER

#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A < B) {
    cout << A * A << endl;
  } else
    cout << B * B << endl;
}
