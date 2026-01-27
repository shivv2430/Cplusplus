// Example: C++ program to concatenate two strings and display the
// length of a string
#include <iostream>
#include<string>
using namespace std;
int main()
{
string str1 = "Welcome";
string str2 = "Home";
cout<<str1+str2<<endl; //Concatenates two strings
cout<<str1.append(str2); //Append str1 with str2
cout<<str1+" "+str2+ " "+"Joy"<<endl;
cout<< "Length of str1: "<<str1.length();
return 0;
}
// OUTPUT
// WelcomeHome
// WelcomeHome
// Welcome Home Joy
// Length of str1: 7