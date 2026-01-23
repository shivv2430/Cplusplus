
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
    cin>>arr[n];
// take first no. as maximum
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[n]<min){
            min=arr[n];
        }
    }
   cout << "Minimum number is: " << min << endl;
}