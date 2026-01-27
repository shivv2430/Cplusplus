// Example: C++ program to display the substring of a string
#include <iostream>
#include<string>
using namespace std;
int main()
{
string str1 = "Welcome Home";
cout<<str1.substr(3,2)<<endl; //Display the substring fromindex 3. Length of substring is 2.
return 0;
}
// OUTPUT
// co

// C++ program to find the substring of a string
#include <iostream>
#include<string>
using namespace std;
int main()
{
string str = "Hi! Welcome Home, Joy. Hi";
cout<<str.find("Jo")<<endl; cout<<str.find("Jo",19)<<endl;
cout<<str.rfind("Hi");
return 0;
}
// OUTPUT
// 18
// 23
// 18446744073709551615