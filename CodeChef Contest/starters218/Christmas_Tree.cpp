// Problem Statement : https://www.codechef.com/problems/XMASTREE
#include <iostream>
using namespace std;

int main() {
  int N, A, M, B;
  cin >> N >> A >> M >> B;

  int cost = N * A;
  int selling = M * B;

  int profit = selling - cost;

  cout << profit << endl;

  return 0;
}