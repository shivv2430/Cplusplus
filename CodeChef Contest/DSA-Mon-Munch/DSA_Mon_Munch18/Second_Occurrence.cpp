// Probelem_statement : https://www.codechef.com/DSAMONDAY018/problems/SCOCN

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int A[1000];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int X;
  cin >> X;

  int count = 0;

  for (int i = 0; i < N; i++) {
    if (A[i] == X) {
      count++;

      if (count == 2) {
        cout << i;
        return 0;
      }
    }
  }

  if (count == 0) {
    cout << -1;
  } else {
    cout << -2;
  }

  return 0;
}