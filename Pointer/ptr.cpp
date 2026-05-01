#include <iostream>
using namespace std;
int main() {
  int a = 10;
  int *ptr1 = &a;
  cout << *ptr1 << endl;
  cout << &a << endl;
  // get same address by *ptr1 and &a

  float b = 20.5;
  float *ptr2 = &b;
  cout << *ptr2 << endl; // give the address of b i.e present in pointer ptr2
  cout << &ptr2 << endl; // give the address of ptr2 not of b

  char c = 'A';
  char *ptr3 = &c;
  cout << *ptr3 << endl;
}