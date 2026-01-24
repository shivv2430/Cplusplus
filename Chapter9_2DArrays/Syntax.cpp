#include <iostream>
using namespace std;
int main (){
    int r;
     cout<<"Enter rows of array :" <<endl;
    cin>>r;

    int c;
    cout<<"Enter columns of array : "<<endl;
    cin>>c;

    int arr[r][c];
    cout<<"Enter the array : "<<endl;

    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>> arr[i][j];
        }

    }

    cout<< "Yours Arrays : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;

    }

}