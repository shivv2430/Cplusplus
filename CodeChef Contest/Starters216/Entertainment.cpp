// Problem-Statement : https://www.codechef.com/problems/ENTERTAIN

#include <iostream>
using namespace std;
// N - number of children

int main() {
  int N;
  cin >> N;

  // each child gets 200rs
  // total money = N*200
  // maximum money = 1000
  if (N * 200 > 1000) {
    cout << 1000;
  } else
    cout << 200 * N;
}
