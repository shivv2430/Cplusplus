#include <iostream>
using namespace std;    
int main() {
    bool x = true ;
    bool y = false ;

    // Logical operators
    cout << "x && y: " << (x && y) << endl ; // Logical AND
    cout << "x || y: " << (x || y) << endl ; // Logical OR
    cout << "!x: " << (!x) << endl ;          // Logical NOT
    return 0 ;
}