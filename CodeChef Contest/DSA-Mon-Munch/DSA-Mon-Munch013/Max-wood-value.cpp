// Problem-statement : https://www.codechef.com/DSAMONDAY013/problems/ROCU
#include <iostream>
using namespace std;

int main() {

  int N;
  cin >> N;

  int price[1001];
  int dp[1001];

  for (int i = 1; i <= N; i++) {
    cin >> price[i];
  }

  dp[0] = 0;

  for (int i = 1; i <= N; i++) {

    dp[i] = 0;

    for (int j = 1; j <= i; j++) {

      dp[i] = max(dp[i], price[j] + dp[i - j]);
    }
  }

  cout << dp[N];

  return 0;
}