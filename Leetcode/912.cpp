#include <vector>
using namespace std;
class Solution {
public:
  void merge(vector<int> &arr, int lb, int mid, int ub) {
    int i = lb;
    int j = mid + 1;
    int k = lb;

    vector<int> temp(arr.size());

    while (i <= mid && j <= ub) {
      if (arr[i] < arr[j]) {
        temp[k] = arr[i];
        i++;
      } else {
        temp[k] = arr[j];
        j++;
      }
      k++;
    }

    while (i <= mid) {
      temp[k] = arr[i];
      i++;
      k++;
    }

    while (j <= ub) {
      temp[k] = arr[j];
      j++;
      k++;
    }

    for (int idx = lb; idx <= ub; idx++) {
      arr[idx] = temp[idx];
    }
  }

  void mergesort(vector<int> &arr, int lb, int ub) {
    if (lb < ub) {
      int mid = (lb + ub) / 2;

      mergesort(arr, lb, mid);
      mergesort(arr, mid + 1, ub);

      merge(arr, lb, mid, ub);
    }
  }

  vector<int> sortArray(vector<int> &nums) {
    mergesort(nums, 0, nums.size() - 1);
    return nums;
  }
};