// Problem-Statement : https://www.codechef.com/DSAMONDAY013/problems/ARCO
#include <iostream>
using namespace std;

int main() {

  int N;
  cin >> N;

  int A[100000];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int groups = 1; // First element starts the first group

  for (int i = 1; i < N; i++) {
    if (A[i] != A[i - 1]) {
      groups++;
    }
  }

  cout << groups;

  return 0;
}