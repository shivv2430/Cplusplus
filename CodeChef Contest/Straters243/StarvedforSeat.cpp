// Problem-Statement:https://www.codechef.com/problems/STRSEAT
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    int S = 0;

    for (int i = 0; i < N; i++) {
      cin >> A[i];
      S += A[i];
    }

    int target = 2 * K - S;

    sort(A.begin(), A.end());

    long long ans = 0;

    for (int i = 0; i < N; i++) {
      int need = target - A[i] + 1; // A[j] >= need

      auto it = lower_bound(A.begin() + i + 1, A.end(), need);

      ans += (A.end() - it);
    }

    cout << ans << "\n";
  }

  return 0;
}