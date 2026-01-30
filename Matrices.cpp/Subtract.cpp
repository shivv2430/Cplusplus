#include<iostream>
using namespace std;
int main (){
    int n,m;
    cout<<"Enter no. of rows : ";
    cin>>n;

    cout<<"Enter no. of columns : ";
    cin>>m;

    int A[n][m],B[n][m],C[n][m];

    cout<<"Enter your matrix A : "<<endl;
    for(int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cin>>A[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Enter your matrix B : "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>B[i][j];
        }
        cout<<endl;
    }
    cout<<endl;


    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }

    cout<<"Matrix A : "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;

    cout<<"Matrix B : "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<B[i][j] <<" ";
        }
         cout<<endl;
    }
    cout<<endl;

    cout<<"Matrix C : "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<C[i][j] <<" ";
        }
         cout<<endl;
    }
    cout<<endl;

}