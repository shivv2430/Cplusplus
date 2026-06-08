#include <iostream>
using namespace std;
int main() {
  int size;
  cin >> size;

  int HT[size];
  for (int i = 0; i < size; i++) {
    HT[i] = -1;
  }

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int key;
    cin >> key;

    int index = key % size;

    while (HT[index] != -1) {
      index = (index + 1) % size;
    }

    HT[index] = key;
  }

  for (int i = 0; i < size; i++) {
    cout << HT[i] << " ";
  }

  cout << "Enter the key to be searched: ";
  int key;
  cin >> key;

  int index = key % size;

  while (HT[index] != key) {
    index = (index + 1) % size;
  }

  if (HT[index] == key) {
    cout << "Key found at index " << index << endl;
  } else {
    cout << "Key not found" << endl;
  }
}
