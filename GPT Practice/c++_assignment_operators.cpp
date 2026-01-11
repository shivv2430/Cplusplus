#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 10;
    a += b; // Equivalent to a = a + b
    a -= 2; // Equivalent to a = a - 2
    b *= 3; // Equivalent to b = b * 3
    b /= 5; // Equivalent to b = b / 5
    cout << "Value of a after operations: " << a << endl;
    cout << "Value of b after operations: " << b << endl;
    return 0;
}