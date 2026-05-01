#include <iostream>
using namespace std;
int main() {
  int a = 9;
  int *ptr = NULL;
  cout << ptr << endl;  // print null
  cout << *ptr << endl; // give segmentation fault
}
