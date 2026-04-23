// Problem link: https://www.codechef.com/problems/P5235

#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int A[N];
    int freq[N + 2];

    // initialize freq array
    for (int i = 0; i <= N + 1; i++) {
      freq[i] = 0;
    }

    // input and count frequency
    for (int i = 0; i < N; i++) {
      cin >> A[i];
      freq[A[i]]++;
    }

    int missing = 0;

    for (int k = 0; k <= N; k++) {
      if (k > 0 && freq[k - 1] == 0) {
        missing++;
      }

      int ans = missing > freq[k] ? missing : freq[k];
      cout << ans << " ";
    }

    cout << "\n";
  }

  return 0;
}