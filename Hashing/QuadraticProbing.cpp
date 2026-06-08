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
    int k = 1;
    while (HT[index] != -1) {
      index = (index + k * k) % size;
      k++;
    }

    HT[index] = key;
  }

  for (int i = 0; i < size; i++) {
    cout << HT[i] << " ";
  }
}