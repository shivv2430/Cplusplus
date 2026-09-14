// Problem-statement : https://www.codechef.com/DSAMONDAY020/problems/MISNUMM

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

  int M;
  cin >> M;

  int B[100];

  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  int minimum = B[0];
  int maximum = B[0];

  for (int i = 1; i < M; i++) {
    minimum = min(minimum, B[i]);
    maximum = max(maximum, B[i]);
  }

  int freqA[101] = {0};
  int freqB[101] = {0};

  for (int i = 0; i < N; i++) {
    freqA[A[i] - minimum]++;
  }

  for (int i = 0; i < M; i++) {
    freqB[B[i] - minimum]++;
  }

  bool found = false;
  for (int x = minimum; x <= maximum; x++) {

    if (freqA[x - minimum] < freqB[x - minimum]) {
      cout << x << " ";
      found = true;
    }
  }
  if (!found) {
    cout << -1;
  }

  cout << endl;

  return 0;
}