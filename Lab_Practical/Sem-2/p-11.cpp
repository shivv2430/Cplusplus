// Write a C++ program to Implement a basic hashing system for password
// verification.
#include <functional>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string originalPassword = "admin123";

  // Store hashed password
  hash<string> hash_fn;
  size_t storedHash = hash_fn(originalPassword);

  string enteredPassword;
  cout << "Enter Password: ";
  cin >> enteredPassword;

  // Hash the entered password
  size_t enteredHash = hash_fn(enteredPassword);

  // Verify password
  if (enteredHash == storedHash) {
    cout << "Password Verified Successfully!" << endl;
  } else {
    cout << "Invalid Password!" << endl;
  }

  return 0;
}