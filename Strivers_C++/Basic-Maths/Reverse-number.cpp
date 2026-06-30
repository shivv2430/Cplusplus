#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int rev = 0;
  int original = n;

  while (original > 0) {
    int last_digit = original % 10;
    rev = (rev * 10) + last_digit;
    original = original / 10;
  }
  cout << rev;
}