#include <iostream>
using namespace std;
 int main (){
    int n;
    cout<< "Enter a no :"<<endl; 
    cin>>n;

    int arr[n];
    cout<< "Enter array no :"<<endl; 
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    cout<< "Array Square : "<<endl;
   for(int i=0;i<n;i++){
        cout<< arr[i]*arr[i]<<endl;
    }


 }