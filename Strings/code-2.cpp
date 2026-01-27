#include <iostream>
using namespace std;
int main()
{
char str[100];
cout << "Enter a string: ";
cin >> str;
cout << "You entered: " << str << endl;
cout << "Enter another string: ";
cin >> str;
cout << "You entered: " << str<< endl;
return 0;
}

// OUTPUT
// Enter a string: C++
// You entered: C++
// Enter another string: Programming is fun
// You entered: Programming


// C++ program to read and display an entire line entered by the user.
#include <iostream>
using namespace std;
int main()
{
char str[100];
cout << "Enter a string: ";
cin.getline(str,100);                   //************* */
cout << "You entered: " << str << endl;
return 0;
}
// OUTPUT
// Enter another string: Programming is fun
// You entered: Programming is fun