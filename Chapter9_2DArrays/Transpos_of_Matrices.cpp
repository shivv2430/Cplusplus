#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    int m;
    cout<<"Enter no. of columns : ";
    cin>>m;

    int arr[n][m];
    cout<<"Enter your Arrays : "<< endl;

    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>> arr[j][i];
        } 
    }

    cout<<"Your Arrays : "<< endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<< arr[j][i]<<" ";
        }   
        cout<<endl;
    }
   

}