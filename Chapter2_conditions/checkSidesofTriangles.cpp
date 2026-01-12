#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Enter one sides of a triangle:"<<a<< endl;
    cout<<"Enter two sides of a triangle:"<<b<< endl;
    cout<<"Enter three sides of a triangle:"<<c<< endl;
    if(a+b>c && b+c>a && c+a>b){
        cout<< "The sides form a valid triangle." << endl;
    }
    else{
        cout<< "The sides do not form a valid triangle." << endl;
    }
}