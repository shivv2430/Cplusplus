// Problem Statement : https://www.codechef.com/problems/BALLOONS

#include <iostream>
using namespace std;
int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int N;
    cin >> N;

    int Total_Cost = 0;

    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      Total_Cost += A * (i + 1);
    }
    cout << Total_Cost << endl;
  }
  cout << endl;
}