#include <iostream>
using namespace std;
int main() {
  int size;
  cout << "Enter size: ";
  cin >> size;

  int HT[size];

  for (int i = 0; i < size; i++) {
    HT[i] = -1;
  }

  int n;
  cout << "Enter no. of keys : ";
  cin >> n;

  int key;
  for (int i = 0; i < n; i++) {

    cout << "Enter key: ";
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
}