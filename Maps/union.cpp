#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int main() {
  map<int, string> s1;
  s1.insert(pair<int, string>(1, "shivani"));
  s1.insert(pair<int, string>(2, "shivam"));
  s1.insert(pair<int, string>(3, "shivi"));
  s1.insert(pair<int, string>(4, "shiva"));

  map<int, string> s2;
  s2.insert(pair<int, string>(1, "shivam"));
  s2.insert(pair<int, string>(3, "shivani"));
  s2.insert(pair<int, string>(5, "satyam"));
  s2.insert(pair<int, string>(7, "sarvika"));

  map<int, string> result;
  set_union(s1.begin(), s1.end(), s2.begin(), s2.end(),
            inserter(result, result.begin()));

  for (auto i : result) {
    cout << i.first << " " << i.second << endl;
  }
}