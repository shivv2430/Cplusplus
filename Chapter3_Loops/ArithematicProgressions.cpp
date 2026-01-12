//print all odd numbers from 1 to n
#include <iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
    for (int i = 1; i <= n; i+=2) {
        cout<<i<<endl;
    }

    return 0;
}
//Arithematic Progression: print first n terms where a=3,d=4
#include <iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
 int a=3;
 int d=4;
    for (int i = 0; i < n; ++i) {
        cout<<a + i*d<<endl;
    }
    return 0;
}
//Arithematic Progression: print first n terms
#include <iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
    for (int i = 0; i <=n; i+=2) {
        cout<<2*n-1<<endl;
    }
    return 0;
}