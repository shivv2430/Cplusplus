// prpblem-statement: https://www.codechef.com/START243D/problems/LOSELESS
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int M, N;
    cin >> M >> N;

    cout << max(0, M - N) << endl;
  }

  return 0;
}