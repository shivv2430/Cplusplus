// Problem-Statment:https://www.codechef.com/problems/SAMESIT
#include <iostream>
using namespace std;

int main() {
  int X;
  cin >> X;

  if (X % 5 == 0)
    cout << "No";
  else
    cout << "Yes";

  return 0;
}