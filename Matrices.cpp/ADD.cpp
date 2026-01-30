#include <iostream>
using namespace std;
int main (){
    // int n;
    //  cout<<"Enter the size of the matrix";
    // cin>>n;

    int n;
     cout<<"Enter the rows of the matrix : ";
    cin>>n;

    int m;
     cout<<"Enter the columns of the matrix : ";
    cin>>m;


    int A[n][m],B[n][m],C[n][m];
// matrix A input
    cout<<"Enter your matrix A : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
// matrix B input
    cout<<"Enter your matrix B : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>B[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
// calculation in C matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
// cout matrix A
    cout<<"Matrix A : "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<< A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix B : "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<< B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix C : "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<< C[i][j]<<" ";
        }
        cout<<endl;
    }
}