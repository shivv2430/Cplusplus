// Prblem-Statement : https://www.codechef.com/DSAMONDAY016/problems/MADIS

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int MAXA = 100000;

  for (int &x : A) {
    cin >> x;
    MAXA = max(MAXA, x);
  }

  // Calculate number of divisors for every number
  vector<int> divisors(MAXA + 1, 0);

  for (int i = 1; i <= MAXA; i++) {
    for (int j = i; j <= MAXA; j += i) {
      divisors[j]++;
    }
  }

  // dp[x] = maximum score of a valid subsequence ending with x
  vector<long long> dp(MAXA + 1, 0);

  long long answer = 0;

  for (int x : A) {
    long long best = 0;

    // Previous value = x - 1
    if (x > 1) {
      best = max(best, dp[x - 1]);
    }

    // Previous value = x / 2
    if (x % 2 == 0) {
      best = max(best, dp[x / 2]);
    }

    // Previous value = x / 3
    if (x % 3 == 0) {
      best = max(best, dp[x / 3]);
    }

    // Previous value = 2 * x
    if (2 * x <= MAXA) {
      best = max(best, dp[2 * x]);
    }

    // Previous value = 3 * x
    if (3 * x <= MAXA) {
      best = max(best, dp[3 * x]);
    }

    dp[x] = max(dp[x], best + divisors[x]);

    answer = max(answer, dp[x]);
  }

  cout << answer << '\n';

  return 0;
}