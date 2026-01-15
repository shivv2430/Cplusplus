// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     cout<< "Enter factor number: " << n<< endl;
//     cout << "Factors of " << n << " are:" << endl;
//     for(int i=1; i<=n; i++) {
//         if (n % i == 0) {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }
//highest_factor
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter a number ";
    cin>>n;
    int f=1;
    for(int i=0;i<n;i++){
        if (n % i == 0) f=i;}
            cout<<f;
}