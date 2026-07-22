// Problem_Statement : https://www.codechef.com/problems/ADDDICE

#include <iostream>
using namespace std;

int main() {
  int X;
  cin >> X;

  if (9 - X >= 1 && 9 - X <= 6)
    cout << "Yes";
  else
    cout << "No";

  return 0;
}