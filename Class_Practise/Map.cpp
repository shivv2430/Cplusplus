#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<int, string> m;
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    int rn;
    string name;

    cin >> rn;
    cin.ignore();

    getline(cin, name);

    m[rn] = name;
  }

  for (auto a : m) {
    cout << a.first << " " << a.second << endl;
  }

  return 0;
}