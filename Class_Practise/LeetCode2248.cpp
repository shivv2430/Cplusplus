#include <iostream>
#include <set>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  set<int> intersectionSet;

  // Input first array
  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;
    intersectionSet.insert(x);
  }

  // Process remaining arrays
  for (int i = 1; i < N; i++) {
    set<int> currentSet, tempSet;

    for (int j = 0; j < M; j++) {
      int x;
      cin >> x;
      currentSet.insert(x);
    }

    // Find intersection
    for (auto it = intersectionSet.begin(); it != intersectionSet.end(); it++) {
      if (currentSet.find(*it) != currentSet.end()) {
        tempSet.insert(*it);
      }
    }

    intersectionSet = tempSet;
  }

  // Print result
  for (auto it = intersectionSet.begin(); it != intersectionSet.end(); it++) {
    cout << *it << " ";
  }

  return 0;
}