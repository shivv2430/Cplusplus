// Problem Statement : https://www.codechef.com/problems/SSNK

#include <iostream>
using namespace std;

int main() {
  string A;
  cin >> A;

  if (A[0] == 's' || A[3] == 's') {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}