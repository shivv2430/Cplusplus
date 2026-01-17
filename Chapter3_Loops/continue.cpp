#include <iostream>
using namespace std;
int main() {
 int n;
    for (int i = 1; i <= 20; i++) {
        // if(i!=3 && i!=8)
        if(i==3 || i==8) continue;
        cout << i << endl;
    }
    return 0;
}