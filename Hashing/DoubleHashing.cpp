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

    int h1 = key % size;
    int h2 = 1 + key % (size - 2);

    int index = h1;
    int k = 1;
    while (HT[index] != -1) {
      index = (h1 + k * h2) % size;
      k++;
    }

    HT[index] = key;
  }

  for (int i = 0; i < size; i++) {
    cout << HT[i] << " ";
  }
}