// Problem -Statement :https://www.codechef.com/DSAMONDAY023/problems/BSEX02
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int layer = 1;
    int count = 0;

    while (N >= layer) {
      N = N - layer;
      count++;
      layer++;
    }

    cout << count << endl;
  }

  return 0;
}