#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << i + 1 << " ";
    }
    cout << endl;
  }
}
// if cout<<i;
// output:-
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
// if cout<<j;
// output:-
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
