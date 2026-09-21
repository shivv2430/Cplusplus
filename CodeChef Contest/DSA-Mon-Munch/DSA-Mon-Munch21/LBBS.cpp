// Problem-Statement : https://www.codechef.com/DSAMONDAY021/problems/LBBS

#include <iostream>
using namespace std;

int main() {
  string s;
  int k;

  cin >> s;
  cin >> k;

  int n = s.length();
  int ans = 0;

  for (int i = 0; i < n; i++) {
    int zeros = 0;
    int ones = 0;

    for (int j = i; j < n; j++) {

      if (s[j] == '0')
        zeros++;
      else
        ones++;

      // One flip changes the difference by 2
      int flipsNeeded = abs(zeros - ones) / 2;

      if (flipsNeeded <= k) {
        ans = max(ans, j - i + 1);
      }
    }
  }

  cout << ans << endl;

  return 0;
}