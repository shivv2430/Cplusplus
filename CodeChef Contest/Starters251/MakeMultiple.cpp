// Problem-Statement : https://www.codechef.com/problems/MUL123

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void solve() {
  int N;
  cin >> N;

  // An array to store the minimum operations needed to reach each number.
  // Since N <= 100, numbers won't exceed ~120. We make the size 200 to be safe.
  vector<int> ops(200, -1);

  // A queue helps us process numbers in order of fewest operations first
  queue<int> q;

  // Start with the initial number N
  ops[N] = 0;
  q.push(N);

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    // If the current number is divisible by 3, we found our answer!
    if (current % 3 == 0) {
      cout << ops[current] << endl;
      return;
    }

    // Option 1: Add 1 to the number
    int opt1 = current + 1;
    if (opt1 < 200 && ops[opt1] == -1) {
      ops[opt1] = ops[current] + 1;
      q.push(opt1);
    }

    // Option 2: Replace with the next strictly larger multiple of 5
    int opt2 = current + (5 - current % 5);
    if (opt2 < 200 && ops[opt2] == -1) {
      ops[opt2] = ops[current] + 1;
      q.push(opt2);
    }
  }
}

int main() {
  // Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--) {
    solve();
  }

  return 0;
}
