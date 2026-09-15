//========Factorial of n numbers using bottom up approach=================
#include <iostream>
using namespace std;

int fact(int n) {
  int result = 1;

  for (int i = 1; i <= n; i++) {
    result = result * i;
  }

  return result;
}

int main() {
  int n;

  cout << "Enter the number: ";
  cin >> n;

  cout << "Factorial of " << n << " is: ";
  cout << fact(n) << endl;

  return 0;
}