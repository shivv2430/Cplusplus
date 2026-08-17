// Problem-Statement : https://www.codechef.com/DSAMONDAY016/problems/GROFR

#include <iostream>
using namespace std;

int main() {
  int N;
  string S;

  cin >> N;
  cin >> S;

  int groups = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == '1' && (i == 0 || S[i - 1] == '0')) {
      groups++;
    }
  }

  cout << groups;

  return 0;
}