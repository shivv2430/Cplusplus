#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;

    cout<<"Enter array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];    
        }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
         cout<<arr[i]+10;
        }
    else cout<<arr[i]*2;
}
}
