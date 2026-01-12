#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    cout<<"Enter a three digit number:"<< n<< endl;
    if(n>99 && n<1000){
        cout<< "The number is a three digit number." << endl;
    }
    else{
        cout<< "The number is not a three digit number." << endl;
    }
}