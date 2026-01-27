// Example : C++ program to print the string using range based for loop
#include <iostream>
#include<string>
using namespace std;
int main()
{
string str = {"Welcome Home"};
for(char c:str)
{
cout<<c;
}
return 0;
}
// OUTPUT
// Welcome Home