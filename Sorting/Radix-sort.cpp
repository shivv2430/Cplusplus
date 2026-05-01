#include <iostream>
using namespace std;
int main() {
  // taking array size
  int n;
  cout << "Enter the number of elements : ";
  cin >> n;

  // taking array elements
  int A[100];
  cout << "Enter the elements :";
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  // finding max elements
  int max = A[0];
  for (int i = 1; i < n; i++) {
    if (A[i] > max) {
      max = A[i];
    }
  }
  // we use counting sort for this
  int count[100];
  for (int place = 1; max / place > 0; place *= 10) {
    // count array
    int output[100];
    int count[100] = {0};

    // counting frequency
    for (int i = 0; i < n; i++) {
      count[(A[i] / place) % 10]++;
    }
    // commulative sum
    for (int i = 1; i < 10; i++) {
      count[i] += count[i - 1];
    }
    // place elements in output array
    for (int i = n - 1; i >= 0; i--) {
      output[count[(A[i] / place) % 10] - 1] = A[i];
      count[(A[i] / place) % 10]--;
    }
    // copy output to array A
    for (int i = 0; i < n; i++) {
      A[i] = output[i];
    }
  }

  // print sorted array
  cout << "Sorted array : ";
  for (int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }

  return 0;
}