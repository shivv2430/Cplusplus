// Problem statement : https://www.codechef.com/problems/UNQSHF
#include <iostream>
#include <string>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    string A, B;

    cin >> N;
    cin >> A;
    cin >> B;

    int aA = 0, aB = 0;

    for (char ch : A) {
      if (ch == 'a')
        aA++;
    }

    for (char ch : B) {
      if (ch == 'a')
        aB++;
    }

    int bA = N - aA;
    int bB = N - aB;

    if (aA == bB && bA == aB)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}