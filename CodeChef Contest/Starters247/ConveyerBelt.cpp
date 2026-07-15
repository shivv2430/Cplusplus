// Problem-Statement : https://www.codechef.com/START247D/problems/CONVEYOR

#include <iostream>
#include <string>

using namespace std;

int main() {
  int T;
  cin >> T; // Read the number of test cases

  // Loop through each test case
  for (int t = 0; t < T; t++) {
    int N, P;
    cin >> N >> P; // Read number of slots and starting position

    string S;
    cin >> S; // Read the conveyor belt directions

    // 1. Calculate cost to go LEFT
    int cost_left = 0;
    // Check slots from the beginning up to the starting position P
    for (int i = 0; i < P; i++) {
      if (S[i] == 'R') {
        cost_left = cost_left + 1;
      }
    }

    // 2. Calculate cost to go RIGHT
    int cost_right = 0;
    // Check slots from the starting position P-1 to the end of the string
    for (int i = P - 1; i < N; i++) {
      if (S[i] == 'L') {
        cost_right = cost_right + 1;
      }
    }

    // 3. Find the smaller cost and print it
    if (cost_left < cost_right) {
      cout << cost_left << endl;
    } else {
      cout << cost_right << endl;
    }
  }

  return 0;
}
