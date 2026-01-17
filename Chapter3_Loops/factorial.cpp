#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter a no. :";
    cin>>n;
    int fact=0;
    for (int i=0;i<=n;i++){
        fact*=i;
    }
    cout<< fact;
}
