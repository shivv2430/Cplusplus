// Problem-Statement: https://www.codechef.com/problems/CARRCOL
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, L, R;
    cin >> N >> L >> R;

    vector<int> A(N + 1);

    for (int i = 1; i <= N; i++)
      cin >> A[i];

    int leftSum = 0, rightSum = 0;

    for (int i = 1; i < L; i++)
      leftSum += A[i];

    for (int i = R + 1; i <= N; i++)
      rightSum += A[i];

    cout << max(leftSum, rightSum) << endl;
  }

  return 0;
}