// Problem Statement : https://www.codechef.com/problems/BAKERY7

#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int normal_cost = 100 * N;
  int bribe_cost = K + 60 * N;

  cout << min(normal_cost, bribe_cost);

  return 0;
}