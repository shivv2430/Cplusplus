#include <iostream>
#include<string>
using namespace std;
int main()
{
string str1 = {"hello"};
string str2 {"Joy"};
string str3 {str2};
string str4 (5,'a'); //Displaying 'a' 5 times
cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4; return 0;
}
// OUTPUT
// Hello
// Joy
// Joy
// aaaaa