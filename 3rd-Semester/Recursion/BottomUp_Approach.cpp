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

//=======sum of n numbers==============
#include <iostream>
using namespace std;

int sum(int n) {
  int result = 0;

  for (int i = 1; i <= n; i++) {
    result = result + i;
  }

  return result;
}

// int main() {
//   int n;

//   cout << "Enter the number: ";
//   cin >> n;

//   cout << "Sum of " << n << " numbers is: ";
//   cout << sum(n) << endl;

//   return 0;
// }

#include <iostream>
using namespace std;

int power(int base, int exponent) {
  int result = 1;

  for (int i = 1; i <= exponent; i++) {
    result = result * base;
  }

  return result;
}

// int main() {
//     int base, exponent;

//     cout << "Enter the base: ";
//     cin >> base;

//     cout << "Enter the exponent: ";
//     cin >> exponent;

//     cout << base << " raised to the power " << exponent
//          << " is: " << power(base, exponent) << endl;

//     return 0;
// }