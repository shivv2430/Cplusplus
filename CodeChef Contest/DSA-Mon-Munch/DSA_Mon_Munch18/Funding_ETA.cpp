// Problem-statement : https://www.codechef.com/DSAMONDAY018/problems/RETAR

#include <iostream>
using namespace std;

int main() {
  int X, A, Y, B, D;

  cin >> X >> A >> Y >> B >> D;

  int revenue = (X * A) + (Y * B);

  if (revenue >= D) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}