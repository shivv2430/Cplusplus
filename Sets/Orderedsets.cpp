#include <iostream>
#include <set>
using namespace std;
int main() {
  set<int> s;

  // insertion
  s.insert(4);
  s.insert(2);
  s.insert(3);
  s.insert(7);
  s.insert(9);
  s.insert(2);
  s.insert(10);

  // size
  cout << s.size() << endl;

  // Traversal
  // set<int>::iterator itr;
  // for(itr = s.begin();itr!=s.end();itr++){
  //     cout<<*itr<<" ";
  // }

  for (auto value : s) {
    cout << value << " ";
  }
  cout << endl;

  // deletion of elements
  // s.erase(4) by passing the value
  //  s.erase(4);
  // s.erase(itr) by passing the iterator
  auto itr = s.begin();
  advance(itr, 3);
  s.erase(itr);

  auto start_itr = s.begin();
  start_itr++; // 2
  auto end_itr = s.begin();
  advance(end_itr, 3); // 4

  s.erase(start_itr, end_itr);
  for (auto value : s) {
    cout << value << " ";
  }
  cout << endl;

  // search operator
  if (s.find(4) != s.end()) {
    cout << "Element is present" << endl;
  } else {
    cout << "Element is not present" << endl;
  }
}