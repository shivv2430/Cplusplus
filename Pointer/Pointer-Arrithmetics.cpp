#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  int a = 10;
  int *ptr = &a;
  cout << ptr << endl;
  ptr--;
  cout << ptr << endl;
  ptr++;
  cout << ptr << endl;

  // Add or subtract from base address
  cout << (arr + 1) << endl;
  cout << (arr - 1) << endl;

  int *p2;          // 100
  int *p1 = p2 + 2; // 108

  cout << p1 - p2 << endl;
}