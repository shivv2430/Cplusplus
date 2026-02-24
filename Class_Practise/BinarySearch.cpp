#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[n] , x;
    for( x=0;x<n;x++){
        cin>>A[x];
    }
    int l,m,h,a;
    l=0;
    h=n-1;
    m=(l+h)/2;
    cin>>a;

    while(A[m]!=a && l<h ){
        if(a > A[m]){
            l=m+1;
        }
    
    else {
        h= m-1;
    }

    m=(l+h)/2;
}
        if(A[m]==a){
            cout<< m+1;
        }
        else{
            cout<<"-1";
        }
}

//input  10
// 10 25 28 30 35 50 55 65 70 75
// 70
//output 9