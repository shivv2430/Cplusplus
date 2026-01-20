#include <iostream>
using namespace std;
int fact(int n){
int f=1;

    for(int i=1;i<=n;i++){
        f+=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n number : "<< endl;
    cin>>n;

    int r;
    cout<<"Enter r number : "<< endl;
    cin>>r;

    int a =fact(n);
    int c =fact(n-r);
     cout<< a/(c)<<endl;
}