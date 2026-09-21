// Problem_Statement : https://www.codechef.com/DSAMONDAY021/problems/MADNER

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    string S;
    cin >> S;

    int pairs = 0;

    for (int i = 0; i < S.length() - 1;) {
      if (S[i] != S[i + 1]) {
        pairs++;
        i += 2; // Both students are used
      } else {
        i++;
      }
    }

    cout << pairs << '\n';
  }

  return 0;
}