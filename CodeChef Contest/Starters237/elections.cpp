// problem statement : https://www.codechef.com/problems/ELECTION1
#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int majority = (N / 2) + 1;

  if (K >= majority) {
    cout << 0;
  } else {
    cout << majority - K;
  }

  return 0;
}