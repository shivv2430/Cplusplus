#include <iostream>
using namespace std;

int main() {
  int n, key;

  // Input number of elements
  cout << "Enter number of elements: ";
  cin >> n;

  int arr[n];

  // Input elements
  cout << "Enter elements:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Input element to search
  cout << "Enter element to search: ";
  cin >> key;

  // Linear Search
  int position = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      position = i;
      break;
    }
  }

  // Output result
  if (position != -1) {
    cout << "Element found at position: " << position + 1 << endl;
  } else {
    cout << "Element not found." << endl;
  }

  return 0;
}