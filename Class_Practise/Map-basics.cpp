#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

  // Create map
  map<int, string> m;

  // Insert elements
  m[101] = "Shivani";
  m[102] = "Rahul";

  // Another way to insert
  m.insert(pair<int, string>(103, "Priya"));

  // Print map
  cout << "Map elements:" << endl;

  for (auto a : m) {
    cout << a.first << " " << a.second << endl;
  }

  // Access value using key
  cout << "\nValue at key 101: ";
  cout << m[101] << endl;

  // Check if key exists
  if (m.count(102)) {
    cout << "Key 102 exists" << endl;
  }

  // Remove element
  m.erase(102);

  // Print after deletion
  cout << "\nAfter deletion:" << endl;

  for (auto a : m) {
    cout << a.first << " " << a.second << endl;
  }

  // Size of map
  cout << "\nSize of map: ";
  cout << m.size() << endl;

  // Check empty or not
  if (m.empty()) {
    cout << "Map is empty" << endl;
  } else {
    cout << "Map is not empty" << endl;
  }

  // Clear all elements
  m.clear();

  cout << "\nAfter clear function:" << endl;

  if (m.empty()) {
    cout << "Map is empty" << endl;
  }

  return 0;
}