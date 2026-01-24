#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the n : ";
    cin>>n;

    int m;
    cout<<"Enter the m : ";
    cin>>m;

    int a[n][m];
    cout<<"Enter the A : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     cout<<endl;

    int b[n][m];
    cout<<"Enter the B : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;
// calculation
    int c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"Array A : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
          cout<<endl;
    }
          cout<<endl;

    cout<<"Array B : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
      cout<<endl;


    cout<<"Array C : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}