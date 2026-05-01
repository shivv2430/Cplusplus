#include <iostream>
using namespace std;

void ChangeA(int *ptr) { // pass by reference
  // change original value
  *ptr = 20;
}

void update(int a) { a = 7; } // pass by value

void changeB(int &c) { // pass by reference using alias
  c = 8;
}

int main() {
  int a = 9;
  ChangeA(&a); // call by reference

  cout << "inside main function a is:" << a << endl;

  update(a); // call by value
  cout << "after update a is: " << a << endl;
}