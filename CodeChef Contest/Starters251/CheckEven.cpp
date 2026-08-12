// Problem-Statement : https://www.codechef.com/problems/CHKEV
#include <iostream>

using namespace std;

int main() {
  // Variable declaration
  int L, R;

  // Read the inputs L and R
  cin >> L >> R;

  // Check if the range has more than one number,
  // OR if the single number is even
  if (L < R || L % 2 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
