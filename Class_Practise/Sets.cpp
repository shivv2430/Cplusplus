#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> numbers;

  int n, x;

  // Total numbers
  cin >> n;

  // Input elements
  for (int i = 0; i < n; i++) {
    cin >> x;
    numbers.insert(x);
  }

  // Print unique and sorted elements
  for (int num : numbers) {
    cout << num << " ";
  }

  return 0;
}