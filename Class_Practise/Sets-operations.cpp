#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s1, s2, s3;
  int x, n, m;

  // first set
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    s1.insert(x);
  }

  // second set
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> x;
    s2.insert(x);
  }

  // Union
  s3 = s1;
  for (int num : s2) {
    s3.insert(num);
  }

  cout << "Union: ";
  for (int num : s3) {
    cout << num << " ";
  }
  cout << endl;

  // Intersection
  s3 = s1;
  s3.clear();
  for (int num : s1) {
    if (s2.count(num)) {
      s3.insert(num);
    }
  }

  cout << "Intersection: ";
  for (int num : s3) {
    cout << num << " ";
  }
  cout << endl;

  // Difference s1 - s2
  s3 = s1;
  for (int num : s2) {
    s3.erase(num);
  }

  cout << "Difference (s1 - s2): ";
  for (int num : s3) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}