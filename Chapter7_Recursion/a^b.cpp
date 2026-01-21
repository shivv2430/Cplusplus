#include <iostream>
using namespace std;
 int pow (int a, int b){
    if (b==0 ) return 1;
    return   a*pow(a,b-1) ;
 }
 int main (){
    int a;
    cout<<"Enter the base no. : ";
    cin>>a;
     int b;
    cout<<"Enter the power : ";
    cin>>b;
    cout<<endl;

    cout<<"Power of a^b : "<<pow(a,b)<<endl;
 }