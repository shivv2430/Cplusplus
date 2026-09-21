// Problem- Statement : https://www.codechef.com/DSAMONDAY021/problems/QUACHS

#include <iostream>
using namespace std;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;
  int lab = X + Y;
  cout << lab - (2 * Z) << endl;
}
