// Problem-Statement : https://www.codechef.com/DSAMONDAY016/problems/CATMS

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  long long speed;
  cin >> speed;

  int count = 1;
  long long minSpeed = speed;

  for (int i = 1; i < N; i++) {
    cin >> speed;

    if (speed < minSpeed) {
      count++;
      minSpeed = speed;
    }
  }

  cout << count;

  return 0;
}