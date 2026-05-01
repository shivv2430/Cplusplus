#include <iostream>
using namespace std;
int main() {
  int a = 10;
  int *ptr = &a;
  int **ptr1 = &ptr;

  cout << *(&a) << endl;  // 10
  cout << *(ptr) << endl; // 10

  cout << *(ptr1) << endl; // 100
  cout << ptr << endl;     // 100
}