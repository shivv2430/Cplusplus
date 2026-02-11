#include<iostream>
using namespace std;
int main (){
    int a , b ;
    char op;
    cout<<"Enter  number with operation : " << endl;
    cin >> a >> op >> b ;

    

    switch (op){
        case '+':  cout<< a+b << endl; 
        break;
        case '-':  cout<< a-b << endl; 
        break;
        case '*':  cout<< a*b << endl;
        break; 
        case '/':  cout<< a/b << endl; 
        break;
        default : cout<< "default operations "<<endl;
    }
}