// Problem-Statement : https://www.codechef.com/problems/BUSROW

#include <algorithm> // Needed to use the min() function
#include <iostream>

using namespace std;

void solve() {
  int N, M, X;
  cin >> N >> M >> X;

  // Step 1: Calculate which row seat X is in
  int current_row = (X - 1) / M + 1;

  // Step 2: Calculate rows walked entering from the front
  int from_front = current_row;

  // Step 3: Calculate rows walked entering from the back
  int from_back = N - current_row + 1;

  // Step 4: Find the minimum of both paths and print it
  cout << min(from_front, from_back) << endl;
}

int main() {
  int T;
  cin >> T; // Read number of test cases

  // Loop to run the code for each test case
  while (T--) {
    solve();
  }

  return 0;
}
