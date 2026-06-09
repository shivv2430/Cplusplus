#include <iostream>
#include <map>
using namespace std;
int main() {
  map<int, int> m1, m2;

  m1.insert(pair<int, int>(1, 2));
  m1.insert(pair<int, int>(2, 3));
  m1.insert(pair<int, int>(3, 4));
  m1.insert(pair<int, int>(4, 5));

  m2.insert(pair<int, int>(1, 2));
  m2.insert(pair<int, int>(2, 3));
  m2.insert(pair<int, int>(3, 4));
  m2.insert(pair<int, int>(4, 5));

  if (m1 == m2) {
    cout << "Maps are equal";
  } else {
    cout << "Maps are not equal";
  }
}