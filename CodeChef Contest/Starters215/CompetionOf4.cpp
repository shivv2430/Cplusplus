// Problem- Statement : https://www.codechef.com/problems/COMP4

#include <cmath>
#include <iostream>
using namespace std;
// X your rank in the contest

int main() {
  int X;
  cin >> X;
  // 1000 * 2^(4-X)
  cout << 1000 * (int)pow(2, 4 - X);

  return 0;
}