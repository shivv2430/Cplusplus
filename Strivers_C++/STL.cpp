#include <iostream>
#include <utility> // Required for std::pair
using namespace std;

void explain() {
  // Simple Pair
  pair<int, int> p = make_pair(1, 2);
  cout << "Simple Pair: " << p.first << " " << p.second << endl;

  // Single Case Pair
  pair<int, int> P;
  P.first = 1;
  P.second = 2;
  cout << "Other Simple Pair: " << P.first << " " << P.second << endl;

  // Nested Pairs
  pair<int, pair<int, int> > P1;
  P1.first = 1;

  P1.second.first = 2;
  P1.second.second = 3;
  cout << "Nested Pair: " << P1.first << " " << P1.second.first << " "
       << P1.second.second << endl;

  // Array of Pairs
  pair<int, int> arr[3];
  arr[0] = make_pair(1, 2);
  arr[1] = make_pair(3, 4);
  arr[2] = make_pair(5, 6);
  cout << "Array of Pairs Output:" << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr[i].first << " " << arr[i].second << endl;
  }
}

int main() {
  explain(); // Calling the explain function to run the code
  return 0;
}