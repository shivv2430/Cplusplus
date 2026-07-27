// Problem-statement : https://www.codechef.com/DSAMONDAY013/problems/PRCO
#include <iostream>
#include <string>
using namespace std;

const int MOD = 1000000007;

int main() {
  string s;
  cin >> s;

  int n = s.length();

  long long dp[1001][1001];

  // Initialize all values to 0
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      dp[i][j] = 0;
    }
  }

  // Single characters are palindromes
  for (int i = 0; i < n; i++) {
    dp[i][i] = 1;
  }

  // Length of substring
  for (int len = 2; len <= n; len++) {

    for (int i = 0; i <= n - len; i++) {

      int j = i + len - 1;

      if (s[i] == s[j]) {
        dp[i][j] = (dp[i + 1][j] + dp[i][j - 1] + 1) % MOD;
      } else {
        dp[i][j] = (dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1]) % MOD;

        if (dp[i][j] < 0)
          dp[i][j] += MOD;
      }
    }
  }

  cout << dp[0][n - 1];

  return 0;
}