#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter the size of Array : "<<endl;
     cin>>n;

    int A[n],B[n],C[n];

    cout<<"Enter the Array A: "<<endl;
    for (int i = 0; i < n; i++){
       cin>>A[i];
    }
    
    cout<<endl;

    cout<<"Enter the Array B: "<<endl;
    for (int i = 0; i < n; i++){
       cin>>B[i];
    }

    cout<<endl;


    for (int i = 0; i < n; i++){
       C[i]=A[i]-B[i];
    }

    cout<<endl;

    cout<<" Array C: "<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<C[i]<<endl;
    }

    cout<<endl;
}