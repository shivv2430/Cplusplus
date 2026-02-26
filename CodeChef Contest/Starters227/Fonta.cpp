//Problem-Statement :-  https://www.codechef.com/problems/FONTA
#include<iostream>
using namespace std;

int main() {
    char S[5];
    cout<<"Enter String : ";
    for(int i=0;i<5;i++){
    cin>> S[i];
    }
    cout<<endl;
    if( S[2] == 'n' && S[3] == 't' && S[4] == 'a' ){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }

}
