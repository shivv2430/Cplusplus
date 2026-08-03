// Problem-Statement : https://www.codechef.com/DSAMONDAY014/problems/SNCO
#include <iostream>
using namespace std;

int main() {
  int A, X, B, Y;
  cin >> A >> X >> B >> Y;

  if ((A * X) == (B * Y)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
