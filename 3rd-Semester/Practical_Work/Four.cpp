#include <iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high) {
  int temp[100];
  int i = low;
  int j = mid + 1;
  int k = 0;
  while (i <= mid && j <= high) {
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
  while (j <= high) {
    temp[k] = arr[j];
    j++;
    k++;
  }
  k = 0;
  for (i = low; i <= high; i++) {
    arr[i] = temp[k];
    k++;
  }
}

void mergeSort(int arr[], int low, int high) {
  if (low < high) {
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }
}

int main() {
  int N;
  cout << "Enter number of elements: ";
  cin >> N;
  int arr[100];
  cout << "Enter " << N << " elements:" << endl;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  mergeSort(arr, 0, N - 1);
  cout << "Sorted array: ";
  for (int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}