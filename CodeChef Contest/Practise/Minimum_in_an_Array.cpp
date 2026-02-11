#include<iostream>
using namespace std;
int main (){
    int N;
    cout<<"Enter the number N : ";
    cin>>N;

    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    int minimum = A[0];

    for(int i=0;i<N;i++){
        if(A[i]<minimum){
            minimum  = A[0] ;
        }
    }
    cout<<minimum<<endl;
}