#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int main() {
  map<int, int> s1;
  s1.insert(pair<int, int>(1, 2));
  s1.insert(pair<int, int>(6, 4));
  s1.insert(pair<int, int>(3, 7));
  s1.insert(pair<int, int>(9, 8));

  map<int, int> s2;
  s2.insert(pair<int, int>(1, 2));
  s2.insert(pair<int, int>(2, 4));
  s2.insert(pair<int, int>(3, 6));
  s2.insert(pair<int, int>(4, 8));

  map<int, int> result;
  set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                 inserter(result, result.begin()));

  for (auto i : result) {
    cout << i.first << " " << i.second << endl;
  }
}