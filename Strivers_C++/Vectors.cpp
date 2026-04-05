#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void vectorExplain() {
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2);

  vector<pair<int, int> > vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 2);

  vector<int> v_with_size(5, 100);

  vector<int> v1(5, 20);
  vector<int> v2(v1);
  vector<int>::iterator it = v.begin();

  it++; 
  cout << *(it) << " ";
}

int main() {
  vectorExplain();
  return 0;
}