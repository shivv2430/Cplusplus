// Problem-Statement:https://www.codechef.com/DSAMONDAY007/problems/DSCPPAS266

#include <algorithm>
#include <vector>

using namespace std;

bool canReduce(int N, vector<int> &arr) {
  sort(arr.begin(), arr.end());

  for (int i = 1; i < N; i++) {
    if (arr[i] != arr[i - 1] && arr[i] - arr[i - 1] > 1) {
      return false;
    }
  }
  return true;
}