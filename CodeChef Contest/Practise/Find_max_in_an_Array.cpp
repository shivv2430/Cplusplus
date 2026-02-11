#include<iostream>
using namespace std;
int main (){
    int N;
    cout<<"Enter the number N :";
    cin>>N;


    int A[N];
    cout<<"Enter the Array : "<<endl;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    int maximum=A[0];

    if(A[N] > A[0]){
        int maximum = A[N];
    }
    cout << "maximum number is : "<< maximum <<endl;
}