// Problem-Statement : https://www.codechef.com/problems/SCORING

#include <iostream>
using namespace std;
// T - number of test cases
// X - difference between alice and bob's score
// Y - sum of alice and bob's score
int main() {
  int T;
  // Read the number of test cases
  cin >> T;

  for (int i = 0; i < T; i++) {
    int X, Y;
    // Read the difference X and the total sum Y
    cin >> X >> Y;

    // Using the equations:
    // A + B = Y
    // A - B = X
    // Adding them gives 2A = Y + X
    int alice = (Y + X) / 2;
    int bob = alice - X;

    cout << alice << " " << bob << endl;
  }
  return 0;
}
