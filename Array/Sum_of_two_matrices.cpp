#include <iostream>
using namespace std;
int main(){
    int x;  //initialise size variable
    cout<<"Enter the size of matrices : ";
    cin>>x; //taking input value of size
    cout<<endl;

    int A[x][x], B[x][x],C[x][x];   //initialise 3 matrices ; (c=a+b)
    
    cout<<" Enter the values of matrix A :"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){                       //taking input value of matrix A
            cin>>A[i][j];
        }
    }

    cout<<endl;

    cout<<" Enter the values of matrix B : "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){                           //taking input value of matrix B
            cin>>B[i][j];
        }
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            C[i][j]=A[i][j]+B[i][j];                        //calculation (c=a+b)
        }
    }

    cout<<endl;

    cout<<" Matrix A :"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
           cout<< A[i][j];                                      //Print matrix A
           cout<<' ';
        }
        cout<<endl;
    }

    cout<<" Matrix B :"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
           cout<< B[i][j];                                      //Print matrix B
           cout<<' ';
        }
        cout<<endl;
    }
    
    cout<<" sum of matrix A+B :"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
           cout<< C[i][j];                                          //Print matrix C(a+b)
           cout<<' ';
        }
        cout<<endl;
    }
    
}