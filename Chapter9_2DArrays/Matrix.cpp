#include <iostream>
using namespace std;
int main (){
    int n=10;
    int a[n][n];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j]=10;

        }
        cout<<endl;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
}