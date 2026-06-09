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
  s2.insert(2);
  s2.insert(3);
  s2.insert(4);

  if (s1 == s2) {
    cout << "s1 is equal to s2";
  } else {
    cout << "s1 is not equal to s2";
  }

  return 0;
}