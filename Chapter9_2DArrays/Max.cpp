#include <iostream>
using namespace std;
int main (){
int n;
    cout<<"Enter the n : ";
    cin>>n;

    int m;
    cout<<"Enter the m : ";
    cin>>m;

    int max=0;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>arr[i][j];
        }
    }
     cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(arr[i][j]>max){
            max=arr[i][j];
        }
        }
    }
}