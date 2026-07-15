// Problem-Statement : https://www.codechef.com/START247D/problems/STRINGSHIFT

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  // Find the first occurrence of 'z'
  int first_z = -1;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'z') {
      first_z = i;
      break; // Stop at the first 'z'
    }
  }

  // If 'z' is found, shift the consecutive block of 'z's
  if (first_z != -1) {
    for (int i = first_z; i < n; i++) {
      if (s[i] == 'z') {
        s[i] = 'a'; // turn 'z' into 'a'
      } else {
        break; // Stop as soon as a non-'z' character is met
      }
    }
  }

  // Output the result
  cout << s << "\n";
}

int main() {
  // Fast I/O for performance
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
