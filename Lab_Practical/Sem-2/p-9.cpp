// Write a C++ program to demonstrate Set operations such as insert, delete,
// find, and display elements.
#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;

  // Insert elements
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(40);

  cout << "Set elements after insertion: ";
  for (int x : s) {
    cout << x << " ";
  }
  cout << endl;

  // Delete an element
  s.erase(20);

  cout << "Set elements after deleting 20: ";
  for (int x : s) {
    cout << x << " ";
  }
  cout << endl;

  // Find an element
  int key = 30;
  if (s.find(key) != s.end()) {
    cout << key << " found in the set." << endl;
  } else {
    cout << key << " not found in the set." << endl;
  }

  // Display all elements
  cout << "Final set elements: ";
  for (int x : s) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}