// Problem statement : https://www.codechef.com/problems/MOVIE7
#include <iostream>
using namespace std;

int main() {
  // T - test_case
  // N - No. of movie ticket
  // M - Bucket of popcorn
  // A - price of movie ticket
  // B - price of popcorn
  // C - price of combo
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N, M, A, B, C;
    cin >> N >> M >> A >> B >> C;

    int combos = min(N, M);

    int total = (combos * C) + (N - combos) * A + (M - combos) * B;

    cout << total << endl;
  }

  return 0;
}