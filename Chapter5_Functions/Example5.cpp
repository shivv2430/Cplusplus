#include <iostream>
using namespace std;
void func(int& x) {
x--;
}
int main() {
int a = 5;
cout << a << endl;
func(a);
cout << a;
}