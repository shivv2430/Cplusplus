#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  int arr[N];
  unordered_set<int> s;

  for (int i = 0; i < N; i++) {
    cin >> arr[i];

    int needed = X - arr[i];

    // Check if required pair exists
    if (s.find(needed) != s.end()) {
      cout << "true";
      return 0;
    }

    s.insert(arr[i]);
  }

  cout << "false";

  return 0;
}