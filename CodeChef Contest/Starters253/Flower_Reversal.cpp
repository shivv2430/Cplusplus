// Probelem statement : https://www.codechef.com/START253C/problems/FLREV
#include <iostream>
#include <string>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    string S;

    cin >> N;
    cin >> S;

    int changes = 0;
    int zeroOne = 0;
    int oneZero = 0;

    for (int i = 0; i < N - 1; i++) {
      if (S[i] != S[i + 1]) {
        changes++;

        if (S[i] == '0') {
          zeroOne++;
        } else {
          oneZero++;
        }
      }
    }

    int answer = (N - 1) - changes;

    // We can improve beauty by 2
    if (zeroOne >= 2 || oneZero >= 2) {
      answer = answer + 2;
    }
    // Otherwise, if both types of transitions exist,
    // we can improve beauty by 1.
    else if (zeroOne >= 1 && oneZero >= 1) {
      answer = answer + 1;
    }

    cout << answer << endl;
  }

  return 0;
}