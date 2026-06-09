#include <iostream>
#include <set>
using namespace std;
int main() {
  set<int> s1;
  s1.insert(1);
  s1.insert(2);
  s1.insert(3);
  s1.insert(4);

  set<int> s2;
  s2.insert(1);
  s2.insert(9);
  s2.insert(3);
  s2.insert(7);
  s2.insert(4);
  s2.insert(6);
  s2.insert(8);

  if (includes(s1.begin(), s1.end(), s2.begin(), s2.end())) {
    cout << "s1 includes s2";
  } else {
    cout << "s1 does not include s2";
  }

  return 0;
}