// Problem_Statement : https://www.codechef.com/START257C/problems/PGNATK

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    int answer = N + (N - 1) / (K - 1);

    cout << answer << endl;
  }

  return 0;
}