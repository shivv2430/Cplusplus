// Problem : Detect duplicates in an array using hashing

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (A[i] == A[j]) {
        cout << "Duplicates found" << endl;
        return 0;
      }
    }
  }
  cout << "No duplicates found" << endl;
}