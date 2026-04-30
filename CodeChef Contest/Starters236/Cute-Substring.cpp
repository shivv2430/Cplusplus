// Problem - Statement :  https://www.codechef.com/problems/UWUWU
#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max_len = 0;

    for (int i = 0; i < n; i++) {
      int length = 0;

      for (int j = i; j < n; j++) {
        int k = j - i; // relative index

        if (k % 2 == 0) {
          // even index → must be 'u' or 'o'
          if (s[j] != 'u' && s[j] != 'o')
            break;
        } else {
          // odd index → must be 'w'
          if (s[j] != 'w')
            break;
        }

        length++;

        // only consider odd length substrings
        if (length % 2 == 1) {
          max_len = max(max_len, length);
        }
      }
    }

    cout << max_len << endl;
  }

  return 0;
}