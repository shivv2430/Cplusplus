#include <iostream>
using namespace std;
int main (){
    

    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            if(i==4||i==1||j==3||j==1)
                cout<<" * ";
            else 
            cout<< "   ";
        }
        cout<< endl;
    }
}