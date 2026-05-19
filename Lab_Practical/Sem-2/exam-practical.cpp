#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];

  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int missing = 1;

  // Find first missing positive number
  while (true) {
    bool found = false;

    for (int i = 0; i < n; i++) {
      if (arr[i] == missing) {
        found = true;
        break;
      }
    }

    if (found == false) {
      break;
    }

    missing++;
  }

  cout << "First missing positive number is: " << missing;

  return 0;
}