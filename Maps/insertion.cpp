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

  return 0;
}
