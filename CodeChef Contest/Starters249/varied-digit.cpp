// Problem-Statement : https://www.codechef.com/START249D/problems/VARDIGS
#include <iostream>
using namespace std;

int main() {
  int X;
  cin >> X;

  int first = X / 10;
  int second = X % 10;

  if (first == second)
    cout << "No";
  else
    cout << "Yes";

  return 0;
}