// Problem-Statement : https://www.codechef.com/DSAMONDAY013/problems/SMSWP
#include <iostream>
using namespace std;

int main() {

  int N;
  cin >> N;

  int A[100000];

  for (int i = 0; i < N; i++)
    cin >> A[i];

  int K;
  cin >> K;

  for (int i = 0; i < N; i++) {

    int minValue = A[i];
    int pos = i;

    for (int j = i + 1; j <= i + K && j < N; j++) {

      if (A[j] < minValue) {
        minValue = A[j];
        pos = j;
      } else if (A[j] == minValue) {
        // choose the rightmost occurrence
        pos = j;
      }
    }

    if (pos != i) {
      swap(A[i], A[pos]);
      break;
    }
  }

  for (int i = 0; i < N; i++)
    cout << A[i] << " ";

  return 0;
}