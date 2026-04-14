// Problem Statement : https://www.codechef.com/problems/CAKEBAKE7

#include <iostream>
using namespace std;

int main() {
  // N = number of customers
  // M = number of cakes
  // Each customer wants 1 cake
  // If N > M, then N-M customers will not get any cake and will be unhappy
  // If M > N, then M-N customers will get 2 cakes and will be happy
  // We want to maximize the number of happy customers

  int N, M;
  cin >> N >> M;

  int extra = M - N;
  int happy = min(N, extra);

  cout << happy;

  return 0;
}