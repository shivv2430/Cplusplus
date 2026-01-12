//Calculator using switch case
#include <iostream>
using namespace std;
int main (){
    int n1;     //Number1
    cin>>n1;
    char op;   //Operator
    cin>>op;
    int n2;     //Number2
    cin>>n2;
    switch(op){
        case '+':
            cout<< n1+n2;
            break;
        case '-':
            cout<< n1-n2;
            break;
        case '*':
            cout<< n1*n2;
            break;
        case '/':
            cout<< n1/n2;
            break;
        default:
            cout<<"Invalid operator";   
    }
}