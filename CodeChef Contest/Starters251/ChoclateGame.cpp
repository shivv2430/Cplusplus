// Problem-Statement : https://www.codechef.com/problems/CHOCGM

#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int N;
  cin >> N;

  vector<int> A(N);
  int total_chocolates = 0;
  int odd_boxes_count = 0;

  // Read the chocolate counts and calculate totals
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    total_chocolates += A[i];

    // Count how many boxes have an odd number of chocolates
    if (A[i] % 2 != 0) {
      odd_boxes_count++;
    }
  }

  // Rule 1: If total chocolates is odd, Bob wins everything. Alice gets 0.
  if (total_chocolates % 2 != 0) {
    cout << 0 << "\n";
  }
  // Rule 2: If total chocolates is even, Alice can eat almost everything
  // except exactly 1 chocolate from each odd-sized box.
  else {
    int alice_score = total_chocolates - odd_boxes_count;
    cout << alice_score << "\n";
  }
}

int main() {
  // Fast I/O for competitive programming
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--) {
    solve();
  }

  return 0;
}
