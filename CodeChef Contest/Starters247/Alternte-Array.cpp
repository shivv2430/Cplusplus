// Problem-Statement: https://www.codechef.com/START247D/problems/ALTARR

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
      cin >> A[i];

    int changes1 = 0, changes2 = 0;

    for (int i = 0; i < N; i++) {
      // Pattern 1: Odd, Even, Odd, Even...
      if (i % 2 == 0) {
        if (A[i] % 2 == 0)
          changes1++;
      } else {
        if (A[i] % 2 == 1)
          changes1++;
      }

      // Pattern 2: Even, Odd, Even, Odd...
      if (i % 2 == 0) {
        if (A[i] % 2 == 1)
          changes2++;
      } else {
        if (A[i] % 2 == 0)
          changes2++;
      }
    }

    cout << min(changes1, changes2) << endl;
  }

  return 0;
}