// Problem-Satement : https://www.codechef.com/problems/GEMBUND

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int R, B, G;
    cin >> R >> B >> G;

    int bundles = min({R, B, G});
    int total = (R + B + G) * 3 + bundles;

    cout << total << endl;
  }
}