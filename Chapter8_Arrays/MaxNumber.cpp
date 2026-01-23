#include <iostream>
using namespace std;
int main (){
 // size of array
    int n;
    cout<< "Enter a no. : "<<endl;
    cin>>n;
   
// array input
    int arr[n];
    cout<< "Enter a array : "<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[n];}
// take first no. as maximum
    int max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
   cout << "Maximum number is: " << max << endl;
}