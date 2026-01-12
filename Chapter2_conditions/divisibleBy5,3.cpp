#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    cout<<"Enter a three digit number:"<< n<< endl;
    if(n%5==0 && n%3==0){
        cout<< "The number is divisible by both 5 and 3." << endl;
    }
    else{
        cout<< "The number is not divisible by both 5 and 3." << endl;
    }
}