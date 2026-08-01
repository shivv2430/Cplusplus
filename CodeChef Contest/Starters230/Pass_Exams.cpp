// Problem-statement: https://www.codechef.com/problems/PASSEXAMS
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int count = 0;
    if (X >= 50)
      count++;
    if (Y >= 50)
      count++;
    if (Z >= 50)
      count++;

    if (count >= 2)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}