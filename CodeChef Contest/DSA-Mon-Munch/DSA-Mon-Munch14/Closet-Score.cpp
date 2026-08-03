// Problem-Statement : https://www.codechef.com/DSAMONDAY014/problems/CLSC

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int A[100];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  sort(A, A + N);

  int ans = INT_MAX;

  for (int i = 0; i < N - 1; i++) {
    ans = min(ans, A[i + 1] - A[i]);
  }

  cout << ans << endl;

  return 0;
}