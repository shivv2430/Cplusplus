// Problem-Statement : https://www.codechef.com/START250D/problems/JUMPCOST
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<int> A(N + 1), dp(N + 1, 0);

    for (int i = 1; i <= N; i++)
      cin >> A[i];

    int best = 1; // dp[1] + 1 = 0 + 1
    int ans = 0;

    for (int j = 2; j <= N; j++) {
      dp[j] = A[j] - j + best;
      ans = max(ans, dp[j]);
      best = max(best, dp[j] + j);
    }

    cout << ans << endl;
  }

  return 0;
}