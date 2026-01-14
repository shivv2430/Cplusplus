#include <iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
 int a=4; // first term
 int d=3; // common difference
//  formula for nth term = a + (n-1)*d = 4 + (n-1)*3 = 3n + 1
    for (int i = 4; i <= 3*n+1; i+=3) {        //  formula for nth term = a + (n-1)*d = 4 + (n-1)*3 = 3n + 1
        cout<< i<<endl;
    }
    return 0;
}