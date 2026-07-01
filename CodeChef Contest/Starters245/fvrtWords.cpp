// Problem-statement:https://www.codechef.com/START245D/problems/FAVWD
#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S[0] == 'c' || S[3] == 'f')
    cout << "Yes";
  else
    cout << "No";

  return 0;
}