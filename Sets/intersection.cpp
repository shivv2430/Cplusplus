#include <algorithm>
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

  set<int> result;
  set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                   inserter(result, result.begin()));

  for (auto i : result) {
    cout << i << " ";
  }
  return 0;
}