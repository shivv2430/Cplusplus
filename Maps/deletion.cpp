#include <iostream>
#include <map>
using namespace std;
int main() {
  map<int, string> name;
  name.insert(pair<int, string>(1, "shivani"));
  name.insert(pair<int, string>(2, "puja"));
  name.insert(pair<int, string>(3, "radha"));
  name.insert(pair<int, string>(4, "rani"));

  for (auto const &[key, val] : name) {
    cout << key << " " << val << endl;
  }

  name.erase(2);

  for (auto const &[key, val] : name) {
    cout << key << " " << val << endl;
  }

  // size
  cout << name.size();

  return 0;
}