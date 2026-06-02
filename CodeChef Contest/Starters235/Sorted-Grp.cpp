// Problem - Statement : https://www.codechef.com/problems/P4235

#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    char S[N];
    for (int i = 0; i < N; i++) {
      cin >> S[i];
    }

    // suffix minimum array
    char sufMin[N];
    sufMin[N - 1] = S[N - 1];

    for (int i = N - 2; i >= 0; i--) {
      sufMin[i] = (S[i] < sufMin[i + 1]) ? S[i] : sufMin[i + 1];
    }

    char temp[N]; // delayed characters
    int t = 0;

    char result[N];
    int idx = 0;

    for (int i = 0; i < N; i++) {
      if (S[i] <= sufMin[i]) {
        result[idx++] = S[i];
      } else {
        temp[t++] = S[i];
      }
    }

    // sort temp in decreasing order (simple bubble sort)
    for (int i = 0; i < t; i++) {
      for (int j = i + 1; j < t; j++) {
        if (temp[i] < temp[j]) {
          char c = temp[i];
          temp[i] = temp[j];
          temp[j] = c;
        }
      }
    }

    for (int i = 0; i < t; i++) {
      result[idx++] = temp[i];
    }

    for (int i = 0; i < N; i++) {
      cout << result[i];
    }
    cout << "\n";
  }

  return 0;
}