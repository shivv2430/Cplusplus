// Prpblem-Statement:https://www.codechef.com/problems/DSACPR66
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMinMax(int n, vector<int> &arr) {
  int min = arr[0];
  int max = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] < min)
      min = arr[i];
    if (arr[i] > max)
      max = arr[i];
  }

  return make_pair(min, max);
}

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  pair<int, int> ans = findMinMax(n, arr);

  cout << ans.first << " " << ans.second;

  return 0;
}