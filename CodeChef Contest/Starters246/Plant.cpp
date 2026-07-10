// Problem_Statement : https://www.codechef.com/problems/TEMPPLANT

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int A[100];

    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    int ans = 0;

    for (int i = 0; i < N - 1; i++) {
      ans = max(ans, min(A[i], A[i + 1]));
    }

    cout << ans << endl;
  }

  return 0;
}