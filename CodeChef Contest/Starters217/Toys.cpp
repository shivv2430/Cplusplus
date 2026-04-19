// Problem-Statement : https://www.codechef.com/problems/TOYS

#include <iostream>
using namespace std;
// N=No. of toys
// M=No. of days
int main() {
  int N, M;
  cin >> N >> M;

  if (N - M >= 0) {
    cout << N - M;
  } else
    cout << 0;
}