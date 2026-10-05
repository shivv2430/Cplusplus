// Problem- Statement : https://www.codechef.com/DSAMONDAY023/problems/SKOD

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int sum = 0;
    int smallest = 101;

    for (int i = 0; i < N; i++) {
      int x;
      cin >> x;

      sum = sum + x;

      if (x < smallest) {
        smallest = x;
      }
    }

    cout << sum - smallest << endl;
  }

  return 0;
}