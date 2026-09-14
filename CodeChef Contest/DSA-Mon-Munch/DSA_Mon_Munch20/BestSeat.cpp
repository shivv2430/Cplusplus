// Problem - Statement : https://www.codechef.com/DSAMONDAY020/problems/BSSEA

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  long long A[1000];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  long long minimum = A[0];
  long long maximum = A[0];

  for (int i = 1; i < N; i++) {
    if (A[i] < minimum) {
      minimum = A[i];
    }

    if (A[i] > maximum) {
      maximum = A[i];
    }
  }
  long long centerTwice = minimum + maximum;

  long long answer = A[0];
  long long bestDistance = llabs(2 * A[0] - centerTwice);

  for (int i = 1; i < N; i++) {
    long long distance = llabs(2 * A[i] - centerTwice);

    if (distance < bestDistance) {
      bestDistance = distance;
      answer = A[i];
    } else if (distance == bestDistance && A[i] < answer) {
      answer = A[i];
    }
  }

  cout << answer << endl;

  return 0;
}