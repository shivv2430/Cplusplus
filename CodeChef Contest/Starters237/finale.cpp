// Problem Link: https: https://www.codechef.com/problems/FINELE
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    long long ans = 0;

    // Final element depends on elements where C(N-1, i) is odd
    // This happens when (i & (N-1)) == i

    for (int i = 0; i < N; i++) {
      if ((i & (N - 1)) == i) {
        ans ^= A[i];
      }
    }

    cout << ans << "\n";
  }

  return 0;
}