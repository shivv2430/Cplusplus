// Problem-statement: https://www.codechef.com/problems/DSACPR49
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> arr(N);
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  vector<long long> leaders;
  long long maxRight = LLONG_MIN;

  for (int i = N - 1; i >= 0; i--) {
    if (arr[i] > maxRight) {
      leaders.push_back(arr[i]);
      maxRight = arr[i];
    }
  }

  reverse(leaders.begin(), leaders.end());

  for (long long x : leaders) {
    cout << x << " ";
  }

  return 0;
}