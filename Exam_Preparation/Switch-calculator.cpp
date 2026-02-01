#include <iostream>
using namespace std;
int main (){
double n1,n2;
char op;

cout<<"Enter First number : ";
cin>>n1;

cout<<"Enter Operator(+,-,*,/) : ";
cin>>op;

cout<<"Enter Second number : ";
cin>>n2;

switch(op){
case '+':
cout<<"n1+n2 = "<<n1+n2<<endl;
break;

case '-':
cout<<"n1-n2 = "<<n1-n2<<endl;
break;

case '*':
cout<<"n1*n2 = "<<n1*n2<<endl;
break;

case '/':
cout<<"n1/n2 = "<<n1/n2<<endl;
break;

}
}