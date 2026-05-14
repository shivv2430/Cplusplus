#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];

  unordered_set<int> s;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    if (arr[i] > 0)
      s.insert(arr[i]);
  }

  int ans = 1;

  while (true) {
    if (s.find(ans) == s.end()) {
      cout << ans;
      break;
    }
    ans++;
  }
}