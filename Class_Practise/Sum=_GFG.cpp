#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int N;
  cin >> N;

  int arr[N];

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  unordered_set<int> sums;

  // Check all pairs
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {

      int pairSum = arr[i] + arr[j];

      // If sum already exists
      if (sums.find(pairSum) != sums.end()) {
        cout << "True";
        return 0;
      }

      sums.insert(pairSum);
    }
  }

  cout << "False";

  return 0;
}