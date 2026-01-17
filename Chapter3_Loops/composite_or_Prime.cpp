#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. : "<< n;
    cin>>n;
    bool x=true;
    for(int i=1;i <= n/2;i++){
        if(i%n==0){
            x=false;
           break;
        }
     }
     if(n==1) cout<< "Neither Prime nor Composite";
    else if(x==true) cout<< "Prime";
    else cout<< "Composite";
    }