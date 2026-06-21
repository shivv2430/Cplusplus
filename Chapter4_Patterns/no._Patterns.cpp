#include <iostream>
using namespace std;
int main (){
    
    int num=1;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(i==2 && j==2)
                cout<<" ";
            else
                cout<< num;
                num++;
        }
        cout<< endl;
    }
    // num++;
}