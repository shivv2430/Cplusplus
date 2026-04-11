// Problem Statement : https://www.codechef.com/problems/LMP2
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int t = 0; t < T; t++) {

    int N;
    cin >> N;

    string S;
    cin >> S;

    int freq[26] = {0};

    // Count frequency
    for (int i = 0; i < N; i++) {
      freq[S[i] - 'a']++;
    }

    bool possible = true;

    // Check condition
    for (int i = 0; i < 26; i++) {
      if (freq[i] > 2) {
        possible = false;
        break;
      }
    }

    if (possible) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}