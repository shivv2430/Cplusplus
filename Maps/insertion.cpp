#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, string> m;

  m.insert(pair<int, string>(1, "one"));
  m.insert(pair<int, string>(2, "two"));
  m.insert(pair<int, string>(3, "three"));

  for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }

  // deletion
  m.erase(1);

  // size
  cout << m.size();

  // find
  if (m.find(2) != m.end()) {
    cout << "key is present";
  } else {
    cout << "key is not present";
  }

  // lower bound
  cout << m.lower_bound(2)->first;

  // upper bound
  cout << m.upper_bound(2)->first;

  // count
  cout << m.count(2);

  // empty
  cout << m.empty();

  // clear
  m.clear();

  return 0;
}
