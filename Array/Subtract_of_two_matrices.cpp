#include<iostream>
using namespace std;
int main(){
    int x;
    cout<< "Enter the size of Matrices : "<<endl;
    cin>>x;
    cout<<endl;

    int A[x][x],B[x][x],C[x][x];

    cout<<"Enter the value of Matrices : A "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>A[i][j];
        }
    }
    cout<< endl;

    cout<<"Enter the value of Matrices : B "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>B[i][j];
        }
    }
    cout<<endl;

    // for matrices C
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
             C[i][j] = A[i][j]-B[i][j];
        }
    }

    cout<<" Matrices : C "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<< C[i][j];
        }
    }
     cout<<endl;

    cout<< "Enter the size of Matrices : "<< x <<endl;
 
    cout<<"Enter the value of Matrices : A "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
    cout << endl;

    cout<<"Enter the value of Matrices : B "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<B[i][j];
        }
        cout<<endl;
    }

    cout << endl;

    cout<<"Enter the value of Matrices : C "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<C[i][j]<< " ";
        }
        cout<<endl;
    }


}