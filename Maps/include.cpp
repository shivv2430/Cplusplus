#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, int> s1;
  s1.insert(pair<int, int>(1, 2));
  s1.insert(pair<int, int>(7, 4));
  s1.insert(pair<int, int>(3, 9));
  s1.insert(pair<int, int>(4, 3));

  map<int, int> s2;
  s2.insert(pair<int, int>(1, 2));
  s2.insert(pair<int, int>(2, 4));
  s2.insert(pair<int, int>(3, 6));
  s2.insert(pair<int, int>(4, 8));

  if (includes(s1.begin(), s1.end(), s2.begin(), s2.end())) {
    cout << "s1 includes s2";
  } else {
    cout << "s1 does not include s2";
  }

  return 0;
}