// Problem- Statement : https://www.codechef.com/problems/P1HOME
// A=number on dice 1
// B = number on dice 2
#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  // if both dice give same number then print yes else print no
  if (A == B) {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
}
