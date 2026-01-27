// Example : C++ program to accessing a character from a string
#include <iostream>
#include<string>
using namespace std;
int main()
{
string str = {"Welcome Home"};
cout << str[6]<<endl; //Displays character at index 6. No Bound
// Checking;
cout << str.at(6); //Displays character at 6th index
return 0;
}
// OUTPUT
// e
// e