// Problem-statement:https://www.codechef.com/problems/CANDY01

#include <iostream>
using namespace std;

int main() {
  int N, C;
  cin >> N >> C;

  int sum = 0;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    sum += x;
  }

  if (C >= sum)
    cout << "Yes";
  else
    cout << "No";

  return 0;
}