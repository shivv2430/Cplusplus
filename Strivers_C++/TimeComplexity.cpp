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

//  O(n) — Linear Time
// Simple loop over all elements.
void fun (int n) {
       for (int i = 0; i < n; i++) {      // some O(1) work 	
        } }
// Note: n>0


//  O(n log n) — n times a logn loop
// Nested loops where the inner loop divides by 2.
void fun (int n) {
       for (int i = 0; i < n; i++) { 	// runs n times
         int x = n;
         while (x > 1) {           	// runs log n times      
             x = x / 2;
  }} }
// Note: n>1


// O(n²) — Quadratic Time
// Two nested loops.
void fun (int n) {
      for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {      // O(1) work       
                } } }
// Note: n>0


// O(n³) — Cubic Time
// Three nested loops.
void fun (int n) {
      for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                      for (int k = 0; k < n; k++) {
        // O(1) work        
        }}} }
// Note: n>0


// O(2ⁿ) — Exponential Time
// Typical example: generating all subsets or recursion branching twice.
int exponential(int n) {
  if (n == 0) return 1;
      return exponential(n - 1) + exponential(n - 1); // 2 calls  
      }
// Note: n>=0





