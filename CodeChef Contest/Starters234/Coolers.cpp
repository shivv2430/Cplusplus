// Problem Statement : https://www.codechef.com/problems/COOLER7
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, M;
    cin >> N >> M;

    int time = 0;

    for (int i = N; i > M; i--) {
      time += i;
    }

    cout << time << endl;
  }

  return 0;
}