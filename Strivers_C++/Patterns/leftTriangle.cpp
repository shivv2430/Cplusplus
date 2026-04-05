#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
// output:-
// *
// **
// ***
// ****

// if cout<<i;
// output:-
// 0
// 1 1
// 2 2 2
// 3 3 3 3

// if cout<<j;
// output:-
// 1
// 1 2
// 1 2 3
// 1 2 3 4
