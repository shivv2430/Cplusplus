#include <iostream>
using namespace std;
// Defining function that prints given number
void printNum(int n){
cout << n << endl;
}
int main() {
int num1 = 10;
int num2 = 99;
// Calling printNum and passing both
// num1 and num2 to it one by one
printNum(num1);
printNum(num2);
return 0;
}