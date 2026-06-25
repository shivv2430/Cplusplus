// Problem-Statement:https://www.codechef.com/problems/PASSCHAIN
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    cout << 1 + ((N - 1) / K) * K << endl;
  }

  return 0;
}