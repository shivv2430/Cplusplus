#include <iostream>
using namespace std;
int main() {
 int n;
    for (int i = 1; i <= 100; ++i) {
        if (i%2==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

//100 times print i by another method.
#include <iostream>
using namespace std;
int main() {
 int n;
    for (int i = 1; i <= 100; i += 2) {
        cout << i << endl;
    }
    return 0;
}