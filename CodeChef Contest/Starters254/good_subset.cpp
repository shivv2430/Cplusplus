// Problem statement : https://www.codechef.com/START254C/problems/GOODSUBSETEZ

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    // cnt[i] = number of elements whose highest set bit is i
    int cnt[31] = {0};

    for (int i = 0; i < N; i++) {
      int x;
      cin >> x;

      int bit = 0;

      // Find the position of the highest set bit
      while (x >= 2) {
        x = x / 2;
        bit++;
      }

      cnt[bit]++;
    }

    int answer = 0;

    // Find the largest group
    for (int i = 0; i < 31; i++) {
      answer = max(answer, cnt[i]);
    }

    cout << answer << endl;
  }

  return 0;
}