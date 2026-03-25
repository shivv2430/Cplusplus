#include <iostream>
using namespace std;

// Function definition outside main
// O(1) — Constant Time
// Runs in the same time regardless of input size.
void fun(int n) {
    cout << n << endl;
}
 // Only one operation }
int main() {
    fun(5);   // function call
}


// O(log n) — Logarithmic Time
void fun (int n) {  
     while (n > 1) {
         n = n / 2;
          	} }
 // Note: n>1

 
