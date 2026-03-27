#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter Array size : ";
    cin>>n;

    int A[n];
    cout <<"Enter the elements of an array : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }

    for(int i = 0 ; i < n-1 ; i++){
        int min = i;
        for(int j = i+1 ; j < n ; j++){
            if(A[j]<A[min]){
                min = j;
                int temp = A[i];
                A[i] = A[min];
                A[min] = temp;
                
            }
        }
    }
    for(int i = 0;i<n; i++){
        cout<<A[i]<<" ";
    }
}