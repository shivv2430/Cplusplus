// Problem-Statement:https://www.codechef.com/problems/EQMNG
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  while (b) {
    long long temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    long long A, B, C;
    cin >> A >> B >> C;

    if (A == B) {
      cout << 0 << "\n";
    } else if (gcd(A, C) == gcd(B, C)) {
      cout << 1 << "\n";
    } else if (gcd(A, C + 1) == gcd(B, C + 1)) {
      cout << 2 << "\n";
    } else {
      cout << 3 << "\n";
    }
  }

  return 0;
}