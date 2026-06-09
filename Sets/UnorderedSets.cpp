#include <iostream>
#include <unordered_set>
using namespace std;
int main() {

  unordered_set<int> u;

  // insertion
  u.insert(1);
  u.insert(3);
  u.insert(2);
  u.insert(8);
  u.insert(3);
  u.insert(9);

  for (auto value : u) {
    cout << value << " ";
  }
  cout << endl;

  // deletion
  u.erase(8);

  for (auto value : u) {
    cout << value << " ";
  }
  cout << endl;

  // size
  cout << u.size() << endl;

  // search operator
  if (u.find(1) != u.end()) {
    cout << "Element is present" << endl;
  } else {
    cout << "Element is not present" << endl;
  }

  // count operator
  if (u.count(1)) {
    cout << "Element is present" << endl;
  } else {
    cout << "Element is not present" << endl;
  }

  // clear operator
  u.clear();

  // print after clearing
  for (auto value : u) {
    cout << value << " ";
  }
  cout << endl;

  return 0;
}