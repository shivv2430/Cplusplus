// Problem-statement : https://www.codechef.com/DSAMONDAY018/problems/LISH
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int W, N;

  cin >> W;
  cin >> N;

  int A[100000];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  // Sort from largest to smallest
  sort(A, A + N, greater<int>());

  int total = 0;
  int units = 0;

  for (int i = 0; i < N; i++) {
    // We can take at most 2 units of each ingredient
    for (int j = 0; j < 2; j++) {
      total += A[i];
      units++;

      if (total >= W) {
        cout << units;
        return 0;
      }
    }
  }

  // If we could not reach W
  cout << -1;

  return 0;
}