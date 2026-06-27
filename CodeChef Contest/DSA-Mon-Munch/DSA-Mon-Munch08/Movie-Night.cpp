// Problem-Statement:https://www.codechef.com/problems/CHEFMOVIE
#include <iostream>
using namespace std;

int getTotalDuration(int H, int M) { return H * 60 + M; }

int main() {
  int H, M;
  cin >> H >> M;

  cout << getTotalDuration(H, M);

  return 0;
}