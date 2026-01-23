#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
    cin>> arr[i];}

    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<n;i++){
        if (i%2==0){
            sumeven+=arr[i];       
          }
        else sumodd+=arr[i];
    }
    cout << "Difference = " << (sumeven - sumodd);
}