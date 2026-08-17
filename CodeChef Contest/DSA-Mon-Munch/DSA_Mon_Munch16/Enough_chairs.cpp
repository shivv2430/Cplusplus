// PRoblem-Statement : https://www.codechef.com/DSAMONDAY016/problems/PWTHC
#include <iostream>
using namespace std;

int main() {
  int N, K, P;
  cin >> N >> K >> P;

  if (N * K >= P)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}