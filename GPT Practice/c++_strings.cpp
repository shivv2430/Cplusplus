#include <string>
#include <iostream>
using namespace std;    
int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    
    // String concatenation
    string str3 = str1 + str2;
    cout << "Concatenated String: " << str3 << endl;

    // String length
    cout << "Length of str3: " << str3.length() << endl;

    // Accessing characters
    cout << "First character of str3: " << str3[0] << endl;
    cout << "Last character of str3: " << str3[str3.length() - 1] << endl;

    // Substring
    string substr = str3.substr(7, 5); // Extract "World"
    cout << "Substring: " << substr << endl;

    // Finding a substring
    size_t pos = str3.find("World");
    if (pos != string::pos) {
        cout << "'World' found at position: " << pos << endl;
    } else {
        cout << "'World' not found" << endl;
    }
     return 0 ;
}