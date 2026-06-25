// Problem-Statement:https://www.codechef.com/problems/DRAFTPICK

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    vector<int> strength(N, 0);

    int card = K;
    bool forward = true;

    while (card > 0) {
      if (forward) {
        for (int i = 0; i < N && card > 0; i++) {
          strength[i] += card;
          card--;
        }
      } else {
        for (int i = N - 1; i >= 0 && card > 0; i--) {
          strength[i] += card;
          card--;
        }
      }
      forward = !forward;
    }

    int ans = *max_element(strength.begin(), strength.end());
    cout << ans << "\n";
  }

  return 0;
}