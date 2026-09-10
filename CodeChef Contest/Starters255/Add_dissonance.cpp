// Problem statement : https://www.codechef.com/problems/ADDIS

#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    unordered_map<int, int> freq;

    int maxFreq = 0;

    for (int i = 0; i < N; i++) {
      int x;
      cin >> x;

      freq[x]++;
      maxFreq = max(maxFreq, freq[x]);
    }

    // ceil(maxFreq / 2)
    cout << (maxFreq + 1) / 2 << '\n';
  }

  return 0;
}