#include <iostream>
using namespace std;
int main () {
int a = 10;
int b = 3;
cout << "a + b = " << a + b << endl; // Addition
cout << "a - b = " << a - b << endl; // Subtraction
cout << "a * b = " << a * b << endl; // Multiplication
cout << "a / b = " << a / b << endl; // Division
cout << "a % b = " << a % b << endl; // Modulus
a++; // Increment
cout << "Incremented a: " << a << endl;
b--; // Decrement
cout << "Decremented b: " << b << endl;
return 0;
}