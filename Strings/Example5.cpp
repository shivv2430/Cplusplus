// Example: C++ program to compare strings using compare() function
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1 = "Welcome";
  string str2 = "Home";
  if ((str1.compare(str2)) == 0)
    cout << "String Matched" << endl;
  else
    cout << "String Not Matched" << endl;
}
// OUTPUT
// String Not Matched