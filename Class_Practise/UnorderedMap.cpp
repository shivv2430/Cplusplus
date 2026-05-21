#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

  unordered_map<int, string> m;

  m[102] = "Rahul";
  m[101] = "Shivani";
  m[103] = "Priya";

  for (auto a : m) {
    cout << a.first << " " << a.second << endl;
  }

  return 0;
}